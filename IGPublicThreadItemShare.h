
#import <Instagram/IGDirectContent.h>

@class NSString, IGDirectContent;

@interface IGPublicThreadItemShare : IGDirectContent {

	NSString* _originalItemThreadId;
	IGDirectContent* _originalItem;

}

@property (nonatomic,retain) NSString * originalItemThreadId;              //@synthesize originalItemThreadId=_originalItemThreadId - In the implementation block
@property (nonatomic,retain) IGDirectContent * originalItem;               //@synthesize originalItem=_originalItem - In the implementation block
-(NSString *)originalItemThreadId;
-(void)setOriginalItemThreadId:(NSString *)arg1 ;
-(IGDirectContent *)originalItem;
-(void)setOriginalItem:(IGDirectContent *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

