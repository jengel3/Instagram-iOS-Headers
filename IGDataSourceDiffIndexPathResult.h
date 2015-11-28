

@class NSArray;

@interface IGDataSourceDiffIndexPathResult : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _moveFroms;
	NSArray* _moveTos;
	NSArray* _updates;

}

@property (nonatomic,readonly) NSArray * inserts;                //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSArray * deletes;                //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSArray * moveFroms;              //@synthesize moveFroms=_moveFroms - In the implementation block
@property (nonatomic,readonly) NSArray * moveTos;                //@synthesize moveTos=_moveTos - In the implementation block
@property (nonatomic,readonly) NSArray * updates;                //@synthesize updates=_updates - In the implementation block
-(NSArray *)moveFroms;
-(NSArray *)moveTos;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 moveFroms:(id)arg3 moveTos:(id)arg4 updates:(id)arg5 ;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(char)hasChanges;
-(NSArray *)updates;
@end

