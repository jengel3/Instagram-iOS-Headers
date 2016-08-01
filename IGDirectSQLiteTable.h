

@protocol IGDirectSQLiteTableConfiguration;
#import <Instagram/Instagram-Structs.h>
@interface IGDirectSQLiteTable : NSObject {

	sqlite3Ref _database;
	id<IGDirectSQLiteTableConfiguration> _configuration;

}

@property (nonatomic,readonly) sqlite3Ref database;                                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) id<IGDirectSQLiteTableConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithDatabase:(sqlite3Ref)arg1 configuration:(id)arg2 ;
-(char)createTableIfNotExisted;
-(char)deleteItemsWhere:(id)arg1 ;
-(id)selectItemsWhere:(id)arg1 orderBy:(id)arg2 ;
-(char)insertItem:(id)arg1 ;
-(id<IGDirectSQLiteTableConfiguration>)configuration;
-(char)deleteItem:(id)arg1 ;
-(sqlite3Ref)database;
-(char)updateItem:(id)arg1 ;
@end

