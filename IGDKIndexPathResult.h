

#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface IGDKIndexPathResult : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _updates;
	NSArray* _moves;
	IGDKStats _stats;

}

@property (nonatomic,copy,readonly) NSArray * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moves;                //@synthesize moves=_moves - In the implementation block
@property (nonatomic,readonly) IGDKStats stats;                     //@synthesize stats=_stats - In the implementation block
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 stats:(IGDKStats)arg5 ;
-(id)resultWithUpdatedMovesAsDeleteInserts;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(char)hasChanges;
-(id)description;
-(IGDKStats)stats;
-(NSArray *)updates;
@end

