
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSURL, IGImageView, IGGradientView, UIImageView, UILabel;

@interface IGAlbumCarouselCell : UICollectionViewCell {

	int _viewerCount;
	NSURL* _imageURL;
	IGImageView* _imageView;
	IGGradientView* _bottomGradient;
	UIImageView* _eyeImageView;
	UILabel* _viewersLabel;

}

@property (nonatomic,readonly) IGImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) IGGradientView * bottomGradient;              //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,readonly) UIImageView * eyeImageView;                   //@synthesize eyeImageView=_eyeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * viewersLabel;                       //@synthesize viewersLabel=_viewersLabel - In the implementation block
@property (assign,nonatomic) int viewerCount;                                //@synthesize viewerCount=_viewerCount - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                               //@synthesize imageURL=_imageURL - In the implementation block
-(IGGradientView *)bottomGradient;
-(UIImageView *)eyeImageView;
-(int)viewerCount;
-(void)setViewerCount:(int)arg1 ;
-(UILabel *)viewersLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGImageView *)imageView;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

