
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentExpandableCell.h>

@class IGImageProgressView;

@interface IGDirectPhotoExpandableCell : IGDirectContentExpandableCell {

	IGImageProgressView* _photoImageView;

}

@property (nonatomic,retain) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(id)contentImage;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

