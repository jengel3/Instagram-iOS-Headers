
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSURL, NSString;

@interface FBSDKSharePhoto : NSObject <FBSDKCopying, NSSecureCoding> {

	char _userGenerated;
	UIImage* _image;
	NSURL* _imageURL;
	NSString* _caption;

}

@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                         //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,getter=isUserGenerated,nonatomic) char userGenerated;              //@synthesize userGenerated=_userGenerated - In the implementation block
@property (nonatomic,copy) NSString * caption;                                       //@synthesize caption=_caption - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photoWithImage:(id)arg1 userGenerated:(char)arg2 ;
+(id)photoWithImageURL:(id)arg1 userGenerated:(char)arg2 ;
+(char)supportsSecureCoding;
-(void)setUserGenerated:(char)arg1 ;
-(char)isEqualToSharePhoto:(id)arg1 ;
-(char)isUserGenerated;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

