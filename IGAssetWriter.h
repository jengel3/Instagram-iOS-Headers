

@class NSMutableDictionary, UIImage, CLLocation;

@interface IGAssetWriter : NSObject {

	NSMutableDictionary* _metadata;
	UIImage* _image;
	CLLocation* _location;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(void)writeVideoToCameraRoll:(id)arg1 ;
+(void)writeVideo:(id)arg1 toInstagramAlbum:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)writeVideoToInstagramAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithImage:(id)arg1 metadata:(id)arg2 ;
-(void)writeToCameraRoll;
-(void)writeToInstagramAlbum:(char)arg1 ;
-(void)showLibraryAccessMessage;
-(void)writeToInstagramAlbum;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

