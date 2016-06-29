

#import <Instagram/Instagram-Structs.h>
@class NSIndexSet, NSArray;

@interface IGDKIndexSetResult : NSObject {

	NSIndexSet* _inserts;
	NSIndexSet* _deletes;
	NSIndexSet* _updates;
	NSArray* _moves;
	IGDKStats _stats;

}

@property (nonatomic,readonly) NSIndexSet * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moves;              //@synthesize moves=_moves - In the implementation block
@property (nonatomic,readonly) IGDKStats stats;                   //@synthesize stats=_stats - In the implementation block
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 stats:(IGDKStats)arg5 ;
-(id)resultWithUpdatedMovesAsDeleteInserts;
-(NSIndexSet *)inserts;
-(NSIndexSet *)deletes;
-(char)hasChanges;
-(id)description;
-(IGDKStats)stats;
-(NSIndexSet *)updates;
@end

