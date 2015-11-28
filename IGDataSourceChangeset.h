

@class NSArray, NSIndexSet;

@interface IGDataSourceChangeset : NSObject {

	char _hasChanges;
	NSArray* _insertedIndexPaths;
	NSArray* _deletedIndexPaths;
	NSArray* _movedFromIndexPaths;
	NSArray* _movedToIndexPaths;
	NSArray* _updatedIndexPaths;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSIndexSet* _movedToSections;
	NSIndexSet* _movedFromSections;

}

@property (nonatomic,readonly) NSArray * insertedIndexPaths;                //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * deletedIndexPaths;                 //@synthesize deletedIndexPaths=_deletedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * movedFromIndexPaths;               //@synthesize movedFromIndexPaths=_movedFromIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * movedToIndexPaths;                 //@synthesize movedToIndexPaths=_movedToIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * updatedIndexPaths;                 //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexSet * insertedSections;               //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletedSections;                //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * movedToSections;                //@synthesize movedToSections=_movedToSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * movedFromSections;              //@synthesize movedFromSections=_movedFromSections - In the implementation block
@property (nonatomic,readonly) char hasChanges;                             //@synthesize hasChanges=_hasChanges - In the implementation block
-(id)initByDiffingFromState:(id)arg1 toState:(id)arg2 sectionsToSkip:(id)arg3 ;
-(NSIndexSet *)movedFromSections;
-(NSArray *)movedFromIndexPaths;
-(NSArray *)updatedIndexPaths;
-(id)initByDiffingFromState:(id)arg1 toState:(id)arg2 ;
-(NSArray *)movedToIndexPaths;
-(NSIndexSet *)movedToSections;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(NSArray *)deletedIndexPaths;
-(NSArray *)insertedIndexPaths;
-(char)hasChanges;
-(id)description;
@end

