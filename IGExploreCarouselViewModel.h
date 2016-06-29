

@class NSString, NSArray, NSURL;

@interface IGExploreCarouselViewModel : NSObject {

	char _topImageVideoIconVisible;
	char _isTextPaddingAdded;
	NSString* _title;
	NSArray* _imageURLs;
	NSArray* _videoIconsVisible;
	NSURL* _topImageURL;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * imageURLs;                            //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,copy) NSArray * videoIconsVisible;                    //@synthesize videoIconsVisible=_videoIconsVisible - In the implementation block
@property (nonatomic,readonly) NSURL * topImageURL;                        //@synthesize topImageURL=_topImageURL - In the implementation block
@property (nonatomic,readonly) char topImageVideoIconVisible;              //@synthesize topImageVideoIconVisible=_topImageVideoIconVisible - In the implementation block
@property (assign,nonatomic) char isTextPaddingAdded;                      //@synthesize isTextPaddingAdded=_isTextPaddingAdded - In the implementation block
-(void)setImageURLs:(NSArray *)arg1 ;
-(void)setVideoIconsVisible:(NSArray *)arg1 ;
-(NSArray *)imageURLs;
-(NSArray *)videoIconsVisible;
-(NSURL *)topImageURL;
-(char)topImageVideoIconVisible;
-(char)isTextPaddingAdded;
-(void)setIsTextPaddingAdded:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

