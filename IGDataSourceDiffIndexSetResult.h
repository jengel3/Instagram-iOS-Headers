

@class NSIndexSet;

@interface IGDataSourceDiffIndexSetResult : NSObject {

	NSIndexSet* _inserts;
	NSIndexSet* _deletes;
	NSIndexSet* _moveFroms;
	NSIndexSet* _moveTos;
	NSIndexSet* _updates;

}

@property (nonatomic,readonly) NSIndexSet * inserts;                //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletes;                //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * moveFroms;              //@synthesize moveFroms=_moveFroms - In the implementation block
@property (nonatomic,readonly) NSIndexSet * moveTos;                //@synthesize moveTos=_moveTos - In the implementation block
@property (nonatomic,readonly) NSIndexSet * updates;                //@synthesize updates=_updates - In the implementation block
-(NSIndexSet *)moveFroms;
-(NSIndexSet *)moveTos;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 moveFroms:(id)arg3 moveTos:(id)arg4 updates:(id)arg5 ;
-(NSIndexSet *)inserts;
-(NSIndexSet *)deletes;
-(char)hasChanges;
-(NSIndexSet *)updates;
@end

