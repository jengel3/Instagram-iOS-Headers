
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGImageProgressViewDelegate;
@class IGRequest, UIButton, UIImageView, NSURL, IGImageView, IGCircularProgressView, NSData, UIImage, NSString;

@interface IGImageProgressView : UIView <IGImageViewDelegate> {

	IGRequest* _imageLoadRequest;
	UIButton* _failureView;
	UIImageView* _loadingImageView;
	double _loadingStartTime;
	char _useDarkBackgroundLoadingStyle;
	NSURL* _imageURL;
	IGImageView* _photoImageView;
	int _loadStatus;
	IGCircularProgressView* _progressView;
	id<IGImageProgressViewDelegate> _delegate;

}

@property (nonatomic,retain) NSURL * imageURL;                                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSData * previewImageData; 
@property (nonatomic,readonly) IGImageView * photoImageView;                               //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,readonly) int loadStatus;                                             //@synthesize loadStatus=_loadStatus - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                        //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * preloadedImage; 
@property (assign,nonatomic) char useDarkBackgroundLoadingStyle;                           //@synthesize useDarkBackgroundLoadingStyle=_useDarkBackgroundLoadingStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)loadStatus;
-(void)setUseDarkBackgroundLoadingStyle:(char)arg1 ;
-(void)doMediaFetch;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(NSData *)previewImageData;
-(char)useDarkBackgroundLoadingStyle;
-(void)makeFailureViewIfNeeded;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2 ;
-(void)imageViewDidChangeImageProgress:(float)arg1 ;
-(void)setPreloadedImage:(UIImage *)arg1 ;
-(IGImageView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGImageProgressViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(id<IGImageProgressViewDelegate>)delegate;
-(void)update;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(UIImage *)preloadedImage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

