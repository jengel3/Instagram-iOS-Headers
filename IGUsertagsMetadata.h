
#import <Instagram/IGMediaMetadataProtocol.h>

@class IGUsertagGroup, NSArray, NSString;

@interface IGUsertagsMetadata : NSObject <IGMediaMetadataProtocol> {

	IGUsertagGroup* _usertags;
	unsigned _numberOfFaces;
	NSArray* _faceRectangles;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;              //@synthesize usertags=_usertags - In the implementation block
@property (assign,nonatomic) unsigned numberOfFaces;                 //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,copy) NSArray * faceRectangles;                 //@synthesize faceRectangles=_faceRectangles - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)setNumberOfFaces:(unsigned)arg1 ;
-(void)setFaceRectangles:(NSArray *)arg1 ;
-(void)prepareToShare;
-(id)sharingInfo;
-(unsigned)numberOfFaces;
-(void)clearFacesInfo;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(NSArray *)faceRectangles;
@end

