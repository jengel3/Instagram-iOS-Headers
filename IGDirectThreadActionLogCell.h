
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView;

@interface IGDirectThreadActionLogCell : IGDirectContentCell {

	IGCoreTextView* _titleTextLabel;

}

@property (nonatomic,retain) IGCoreTextView * titleTextLabel;              //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
+(id)styledTitleStringForActionLog:(id)arg1 ;
+(float)heightForCellWithActionLog:(id)arg1 withWidth:(float)arg2 ;
-(void)setShowUsername:(char)arg1 ;
-(void)setHideProfilePicture:(char)arg1 ;
-(void)setTitleTextLabel:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(IGCoreTextView *)titleTextLabel;
@end

