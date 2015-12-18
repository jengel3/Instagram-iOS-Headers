

@class NSIndexSet, NSArray;

@interface IGDataSourceChangeset : NSObject {

	char _hasChanges;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSArray* _movedSections;
	NSArray* _insertedIndexPaths;
	NSArray* _deletedIndexPaths;
	NSArray* _updatedIndexPaths;
	NSArray* _movedIndexPaths;

}

@property (nonatomic,readonly) NSIndexSet * insertedSections;              //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletedSections;               //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,readonly) NSArray * movedSections;                    //@synthesize movedSections=_movedSections - In the implementation block
@property (nonatomic,readonly) NSArray * insertedIndexPaths;               //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * deletedIndexPaths;                //@synthesize deletedIndexPaths=_deletedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * updatedIndexPaths;                //@synthesize updatedIndexPaths=_updatedIndexPaths - In the implementation block
@property (nonatomic,readonly) NSArray * movedIndexPaths;                  //@synthesize movedIndexPaths=_movedIndexPaths - In the implementation block
@property (nonatomic,readonly) char hasChanges;                            //@synthesize hasChanges=_hasChanges - In the implementation block
-(id)initByDiffingFromState:(id)arg1 toState:(id)arg2 sectionsToSkip:(id)arg3 ;
-(NSArray *)movedSections;
-(NSArray *)movedIndexPaths;
-(NSArray *)updatedIndexPaths;
-(id)initByDiffingFromState:(id)arg1 toState:(id)arg2 ;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(NSArray *)deletedIndexPaths;
-(NSArray *)insertedIndexPaths;
-(char)hasChanges;
-(id)description;
@end

