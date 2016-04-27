
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIImageView.h>
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGImageViewDelegate, IGImageProcessor;
@class NSURL, UIImage, NSString;

@interface IGImageView : UIImageView <IGMediaRequestDelegate> {

	char _shouldDecodeAsynchronously;
	char _delegateNeedsImageNow;
	char _showPlaceholder;
	NSURL* _imageURL;
	UIImage* _placeholderImage;
	id<IGImageViewDelegate> _delegate;
	unsigned _dataLengthForDebug;
	int _imagePriority;
	id<IGImageProcessor> _imageProcessor;

}

@property (nonatomic,retain) NSURL * imageURL;                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                           //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned dataLengthForDebug;                          //@synthesize dataLengthForDebug=_dataLengthForDebug - In the implementation block
@property (assign,nonatomic) int imagePriority;                                    //@synthesize imagePriority=_imagePriority - In the implementation block
@property (assign,nonatomic) char shouldDecodeAsynchronously;                      //@synthesize shouldDecodeAsynchronously=_shouldDecodeAsynchronously - In the implementation block
@property (assign,nonatomic) char delegateNeedsImageNow;                           //@synthesize delegateNeedsImageNow=_delegateNeedsImageNow - In the implementation block
@property (nonatomic,retain) id<IGImageProcessor> imageProcessor;                  //@synthesize imageProcessor=_imageProcessor - In the implementation block
@property (assign,nonatomic) char showPlaceholder;                                 //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)cancelImageLoad;
-(char)shouldDecodeAsynchronously;
-(id)processedImageForImage:(id)arg1 ;
-(void)setImage:(id)arg1 needsProcessing:(char)arg2 ;
-(void)setDataLengthForDebug:(unsigned)arg1 ;
-(id)processedURLForURL:(id)arg1 ;
-(void)notifyDelegateOfSuccess;
-(void)setDelegateNeedsImageNow:(char)arg1 ;
-(id<IGImageProcessor>)imageProcessor;
-(void)stopListeningForImageLoadNotification;
-(void)setImageWithData:(id)arg1 ;
-(unsigned)dataLengthForDebug;
-(int)imagePriority;
-(void)setImagePriority:(int)arg1 ;
-(void)setShouldDecodeAsynchronously:(char)arg1 ;
-(char)delegateNeedsImageNow;
-(void)setImageProcessor:(id<IGImageProcessor>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id<IGImageViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGImageViewDelegate>)delegate;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)updateImage;
-(void)setShowPlaceholder:(char)arg1 ;
-(char)showPlaceholder;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

