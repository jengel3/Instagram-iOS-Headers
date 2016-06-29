
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface FBSDKShareVideo : NSObject <FBSDKCopying, NSSecureCoding> {

	NSURL* _videoURL;

}

@property (nonatomic,copy) NSURL * videoURL;                        //@synthesize videoURL=_videoURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoWithVideoURL:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)isEqualToShareVideo:(id)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

