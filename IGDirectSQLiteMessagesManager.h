

@class IGDirectSQLiteTable;

@interface IGDirectSQLiteMessagesManager : NSObject {

	IGDirectSQLiteTable* _table;

}

@property (nonatomic,retain) IGDirectSQLiteTable * table;              //@synthesize table=_table - In the implementation block
-(id)initWithTable:(id)arg1 ;
-(IGDirectSQLiteTable *)table;
-(void)setTable:(IGDirectSQLiteTable *)arg1 ;
@end

