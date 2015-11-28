
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentExpandableCell.h>

@class IGImageProgressView;

@interface IGDirectPhotoExpandableCell : IGDirectContentExpandableCell {

	IGImageProgressView* _photoImageView;

}

@property (nonatomic,retain) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(CGSize)photoSizeForHeight:(float)arg1 ;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

