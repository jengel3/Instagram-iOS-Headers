
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface IGEditsMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying> {

	NSDictionary* _editsInfo;

}

@property (nonatomic,readonly) NSDictionary * editsInfo;              //@synthesize editsInfo=_editsInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)prepareToShare;
-(id)initWithEditsInfo:(id)arg1 ;
-(id)sharingInfo;
-(NSDictionary *)editsInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

