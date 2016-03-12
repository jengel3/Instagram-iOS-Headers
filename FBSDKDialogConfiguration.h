
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSURL;

@interface FBSDKDialogConfiguration : NSObject <FBSDKCopying, NSSecureCoding> {

	NSArray* _appVersions;
	NSString* _name;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSArray * appVersions;              //@synthesize appVersions=_appVersions - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithName:(id)arg1 URL:(id)arg2 appVersions:(id)arg3 ;
-(NSArray *)appVersions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
@end

