
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGUsertagGroup, NSString;

@interface IGUsertagsMetadata : NSObject <IGMediaMetadataProtocol, NSSecureCoding, NSCopying> {

	IGUsertagGroup* _usertags;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;              //@synthesize usertags=_usertags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)prepareToShare;
-(void)clearFacesInfo;
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(id)sharingInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

