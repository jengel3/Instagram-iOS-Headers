
#import <Instagram/IGUserCell.h>

@class UIView;

@interface IGClusterBrowsingUserCell : IGUserCell {

	UIView* _bottomLineSeparator;

}

@property (nonatomic,retain) UIView * bottomLineSeparator;              //@synthesize bottomLineSeparator=_bottomLineSeparator - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 analyticsDelegate:(id)arg3 ;
-(void)setBottomLineSeparator:(UIView *)arg1 ;
-(UIView *)bottomLineSeparator;
-(void)layoutSubviews;
@end

