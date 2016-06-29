

#import <Instagram/Instagram-Structs.h>
@class NSIndexSet, NSSet;

@interface IGListBatchUpdateData : NSObject {

	NSIndexSet* _insertSections;
	NSIndexSet* _deleteSections;
	NSIndexSet* _reloadSections;
	NSSet* _moveSections;
	NSSet* _insertIndexPaths;
	NSSet* _deleteIndexPaths;
	NSSet* _reloadIndexPaths;

}

@property (nonatomic,readonly) NSIndexSet * insertSections;              //@synthesize insertSections=_insertSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deleteSections;              //@synthesize deleteSections=_deleteSections - In the implementation block
@property (nonatomic,readonly) NSIndexSet * reloadSections;              //@synthesize reloadSections=_reloadSections - In the implementation block
@property (nonatomic,readonly) NSSet * moveSections;                     //@synthesize moveSections=_moveSections - In the implementation block
@property (nonatomic,readonly) NSSet * insertIndexPaths;                 //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (nonatomic,readonly) NSSet * deleteIndexPaths;                 //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,readonly) NSSet * reloadIndexPaths;                 //@synthesize reloadIndexPaths=_reloadIndexPaths - In the implementation block
+(void)cleanIndexSetWithMap:(unordered_map<unsigned int, IGDKMoveIndex *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, IGDKMoveIndex *> > >*)arg1 moves:(id)arg2 sections:(id)arg3 deletes:(id)arg4 inserts:(id)arg5 ;
+(void)cleanIndexPathsWithMap:(unordered_map<unsigned int, IGDKMoveIndex *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, IGDKMoveIndex *> > >*)arg1 moves:(id)arg2 indexPaths:(id)arg3 deletes:(id)arg4 inserts:(id)arg5 ;
-(NSSet *)deleteIndexPaths;
-(NSSet *)insertIndexPaths;
-(NSSet *)reloadIndexPaths;
-(id)initWithInsertSections:(id)arg1 deleteSections:(id)arg2 reloadSections:(id)arg3 moveSections:(id)arg4 insertIndexPaths:(id)arg5 deleteIndexPaths:(id)arg6 reloadIndexPaths:(id)arg7 ;
-(NSIndexSet *)insertSections;
-(NSIndexSet *)deleteSections;
-(NSSet *)moveSections;
-(id)description;
-(NSIndexSet *)reloadSections;
@end

