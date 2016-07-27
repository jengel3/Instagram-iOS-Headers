

@class NSMutableDictionary, UIImage, CLLocation;

@interface IGAssetWriter : NSObject {

	NSMutableDictionary* _metadata;
	UIImage* _image;
	CLLocation* _location;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(void)writeVideoToCameraRoll:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)writeVideo:(id)arg1 toInstagramAlbum:(char)arg2 completion:(/*^block*/id)arg3 ;
+(void)writeVideoToInstagramAlbum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeToCameraRoll;
-(id)initWithImage:(id)arg1 metadata:(id)arg2 ;
-(void)writeToCameraRollWithCompletion:(/*^block*/id)arg1 ;
-(void)writeToInstagramAlbum:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)showLibraryAccessMessage;
-(void)writeToInstagramAlbum;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

