
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGImageProgressViewDelegate;
@class IGRequest, IGSimpleButton, UIImageView, NSURL, IGImageView, IGCircularProgressView, UIImage, NSString;

@interface IGImageProgressView : UIView <IGImageViewDelegate> {

	IGRequest* _imageLoadRequest;
	IGSimpleButton* _failureView;
	UIImageView* _loadingImageView;
	double _loadingStartTime;
	char _delegateNeedsImageNow;
	NSURL* _imageURL;
	IGImageView* _photoImageView;
	int _loadStatus;
	IGCircularProgressView* _progressView;
	id<IGImageProgressViewDelegate> _delegate;
	UIImage* _loadingImage;
	UIImage* _preloadedImage;

}

@property (nonatomic,retain) NSURL * imageURL;                                             //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) char delegateNeedsImageNow;                                   //@synthesize delegateNeedsImageNow=_delegateNeedsImageNow - In the implementation block
@property (nonatomic,readonly) IGImageView * photoImageView;                               //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,readonly) int loadStatus;                                             //@synthesize loadStatus=_loadStatus - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                        //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * loadingImage;                                       //@synthesize loadingImage=_loadingImage - In the implementation block
@property (nonatomic,retain) UIImage * preloadedImage;                                     //@synthesize preloadedImage=_preloadedImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)loadStatus;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2 ;
-(void)imageViewDidChangeImageProgress:(float)arg1 ;
-(char)delegateNeedsImageNow;
-(void)setDelegateNeedsImageNow:(char)arg1 ;
-(void)doMediaFetch;
-(void)displayLoadingImageIfNeeded;
-(void)makeFailureView;
-(void)setLoadingImage:(UIImage *)arg1 ;
-(UIImage *)loadingImage;
-(void)setPreloadedImage:(UIImage *)arg1 ;
-(IGImageView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGImageProgressViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGImageProgressViewDelegate>)delegate;
-(void)update;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(UIImage *)preloadedImage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

