
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentExpandableCell.h>

@class IGImageProgressView;

@interface IGPublicThreadPhotoExpandableCell : IGPublicThreadContentExpandableCell {

	IGImageProgressView* _photoImageView;

}

@property (nonatomic,retain) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

