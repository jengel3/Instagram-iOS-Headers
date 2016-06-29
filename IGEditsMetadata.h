
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString;

@interface IGEditsMetadata : NSObject <IGMediaMetadataProtocol, NSCoding> {

	NSDictionary* _editsInfo;

}

@property (nonatomic,readonly) NSDictionary * editsInfo;              //@synthesize editsInfo=_editsInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)editsInfo;
-(id)initWithEditsInfo:(id)arg1 ;
-(void)prepareToShare;
-(id)sharingInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

