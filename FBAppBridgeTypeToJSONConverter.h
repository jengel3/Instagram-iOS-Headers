

@class NSMutableArray;

@interface FBAppBridgeTypeToJSONConverter : NSObject {

	NSMutableArray* _createdPasteboardNames;

}

@property (nonatomic,retain) NSMutableArray * createdPasteboardNames;              //@synthesize createdPasteboardNames=_createdPasteboardNames - In the implementation block
+(id)appBridgeTypeFromJSON:(id)arg1 ;
-(NSMutableArray *)createdPasteboardNames;
-(id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1 ;
-(id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1 ;
-(void)setCreatedPasteboardNames:(NSMutableArray *)arg1 ;
-(id)convertedDictionaryFromDictionary:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)convertedArrayFromArray:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)jsonFromData:(id)arg1 tag:(id)arg2 ;
-(id)convertedObjectFromObject:(id)arg1 convertingToJSON:(char)arg2 ;
-(void)dealloc;
@end

