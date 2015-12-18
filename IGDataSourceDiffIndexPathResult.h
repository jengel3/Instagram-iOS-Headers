

@class NSArray;

@interface IGDataSourceDiffIndexPathResult : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _updates;
	NSArray* _moves;

}

@property (nonatomic,readonly) NSArray * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSArray * moves;                //@synthesize moves=_moves - In the implementation block
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 ;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(char)hasChanges;
-(id)description;
-(NSArray *)updates;
@end

