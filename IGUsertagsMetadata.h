
#import <Instagram/IGMediaMetadataProtocol.h>

@class IGUsertagGroup, NSString;

@interface IGUsertagsMetadata : NSObject <IGMediaMetadataProtocol> {

	IGUsertagGroup* _usertags;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;              //@synthesize usertags=_usertags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)prepareToShare;
-(id)sharingInfo;
-(void)clearFacesInfo;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
@end

