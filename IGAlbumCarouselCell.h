
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSURL, UIImage, IGImageView, IGGradientView, UIImageView, UILabel;

@interface IGAlbumCarouselCell : UICollectionViewCell {

	char _isFailedUpload;
	int _viewerCount;
	NSURL* _imageURL;
	UIImage* _preloadedImage;
	IGImageView* _imageView;
	IGGradientView* _bottomGradient;
	UIImageView* _eyeImageView;
	UILabel* _viewersLabel;

}

@property (nonatomic,readonly) IGImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) IGGradientView * bottomGradient;              //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,readonly) UIImageView * eyeImageView;                   //@synthesize eyeImageView=_eyeImageView - In the implementation block
@property (nonatomic,readonly) UILabel * viewersLabel;                       //@synthesize viewersLabel=_viewersLabel - In the implementation block
@property (assign,nonatomic) char isFailedUpload;                            //@synthesize isFailedUpload=_isFailedUpload - In the implementation block
@property (assign,nonatomic) int viewerCount;                                //@synthesize viewerCount=_viewerCount - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                               //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * preloadedImage;                       //@synthesize preloadedImage=_preloadedImage - In the implementation block
-(IGGradientView *)bottomGradient;
-(int)viewerCount;
-(UIImageView *)eyeImageView;
-(char)isFailedUpload;
-(void)setViewerCount:(int)arg1 ;
-(void)setIsFailedUpload:(char)arg1 ;
-(UILabel *)viewersLabel;
-(void)setPreloadedImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGImageView *)imageView;
-(UIImage *)preloadedImage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

