

@class NSString, NSArray, NSURL, UIImage;

@interface IGExploreCarouselViewModel : NSObject {

	char _topImageVideoIconVisible;
	char _isTextPaddingAdded;
	NSString* _title;
	NSArray* _imageURLs;
	NSArray* _videoIconsVisible;
	NSURL* _topImageURL;
	UIImage* _placeholderImage;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * imageURLs;                            //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,copy) NSArray * videoIconsVisible;                    //@synthesize videoIconsVisible=_videoIconsVisible - In the implementation block
@property (nonatomic,readonly) NSURL * topImageURL;                        //@synthesize topImageURL=_topImageURL - In the implementation block
@property (nonatomic,copy) UIImage * placeholderImage;                     //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) char topImageVideoIconVisible;              //@synthesize topImageVideoIconVisible=_topImageVideoIconVisible - In the implementation block
@property (assign,nonatomic) char isTextPaddingAdded;                      //@synthesize isTextPaddingAdded=_isTextPaddingAdded - In the implementation block
-(void)setImageURLs:(NSArray *)arg1 ;
-(NSArray *)videoIconsVisible;
-(void)setVideoIconsVisible:(NSArray *)arg1 ;
-(void)setIsTextPaddingAdded:(char)arg1 ;
-(NSArray *)imageURLs;
-(NSURL *)topImageURL;
-(char)topImageVideoIconVisible;
-(char)isTextPaddingAdded;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
@end

