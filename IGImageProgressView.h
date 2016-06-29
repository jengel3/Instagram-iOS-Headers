
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGImageProgressViewDelegate;
@class IGRequest, UIButton, UIImageView, NSURL, IGImageView, IGCircularProgressView, UIImage, NSData, NSString;

@interface IGImageProgressView : UIView <IGImageViewDelegate> {

	IGRequest* _imageLoadRequest;
	UIButton* _failureView;
	UIImageView* _loadingImageView;
	double _loadingStartTime;
	char _delegateNeedsImageNow;
	NSURL* _imageURL;
	IGImageView* _photoImageView;
	int _loadStatus;
	IGCircularProgressView* _progressView;
	id<IGImageProgressViewDelegate> _delegate;
	UIImage* _preloadedImage;

}

@property (nonatomic,retain) NSURL * imageURL;                                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSData * previewImageData; 
@property (assign,nonatomic) char delegateNeedsImageNow;                                   //@synthesize delegateNeedsImageNow=_delegateNeedsImageNow - In the implementation block
@property (nonatomic,readonly) IGImageView * photoImageView;                               //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,readonly) int loadStatus;                                             //@synthesize loadStatus=_loadStatus - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                        //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * preloadedImage;                                     //@synthesize preloadedImage=_preloadedImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)previewImageData;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2 ;
-(void)setDelegateNeedsImageNow:(char)arg1 ;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewDidChangeImageProgress:(float)arg1 ;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(char)delegateNeedsImageNow;
-(int)loadStatus;
-(void)doMediaFetch;
-(void)makeFailureViewIfNeeded;
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

