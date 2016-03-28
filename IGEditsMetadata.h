
#import <Instagram/IGMediaMetadataProtocol.h>

@class NSDictionary, NSString;

@interface IGEditsMetadata : NSObject <IGMediaMetadataProtocol> {

	NSDictionary* _editsInfo;

}

@property (nonatomic,readonly) NSDictionary * editsInfo;              //@synthesize editsInfo=_editsInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEditsInfo:(id)arg1 ;
-(void)prepareToShare;
-(id)sharingInfo;
-(NSDictionary *)editsInfo;
@end

