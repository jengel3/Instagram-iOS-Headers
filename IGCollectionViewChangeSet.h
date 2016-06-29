

@class NSArray;

@interface IGCollectionViewChangeSet : NSObject {

	NSArray* _addedIndexPaths;
	NSArray* _removedIndexPaths;
	NSArray* _fromMoveIndexPaths;
	NSArray* _toMoveIndexPaths;

}

@property (nonatomic,retain) NSArray * addedIndexPaths;                 //@synthesize addedIndexPaths=_addedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * removedIndexPaths;               //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * fromMoveIndexPaths;              //@synthesize fromMoveIndexPaths=_fromMoveIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * toMoveIndexPaths;                //@synthesize toMoveIndexPaths=_toMoveIndexPaths - In the implementation block
-(void)setAddedIndexPaths:(NSArray *)arg1 ;
-(void)setRemovedIndexPaths:(NSArray *)arg1 ;
-(void)setFromMoveIndexPaths:(NSArray *)arg1 ;
-(void)setToMoveIndexPaths:(NSArray *)arg1 ;
-(NSArray *)addedIndexPaths;
-(NSArray *)removedIndexPaths;
-(NSArray *)fromMoveIndexPaths;
-(NSArray *)toMoveIndexPaths;
-(id)description;
@end

