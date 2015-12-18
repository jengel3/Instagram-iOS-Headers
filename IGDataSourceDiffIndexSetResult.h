

@class NSIndexSet, NSArray;

@interface IGDataSourceDiffIndexSetResult : NSObject {

	NSIndexSet* _inserts;
	NSIndexSet* _deletes;
	NSIndexSet* _updates;
	NSArray* _moves;

}

@property (nonatomic,readonly) NSIndexSet * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSArray * moves;                   //@synthesize moves=_moves - In the implementation block
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 ;
-(NSIndexSet *)inserts;
-(NSIndexSet *)deletes;
-(char)hasChanges;
-(id)description;
-(NSIndexSet *)updates;
@end

