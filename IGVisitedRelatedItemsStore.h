

@class NSMutableArray;

@interface IGVisitedRelatedItemsStore : NSObject {

	NSMutableArray* _visitedItems;

}

@property (nonatomic,retain) NSMutableArray * visitedItems;              //@synthesize visitedItems=_visitedItems - In the implementation block
+(id)sharedHashtagsStore;
+(id)sharedLocationsStore;
-(NSMutableArray *)visitedItems;
-(void)addVisitedItem:(id)arg1 ;
-(id)allVisitedItems;
-(void)setVisitedItems:(NSMutableArray *)arg1 ;
-(id)init;
@end

