
#import <Instagram/IGDirectSQLiteTableConfiguration.h>

@class NSString, NSDictionary;

@interface IGDirectSQLitePlistTableConfiguration : NSObject <IGDirectSQLiteTableConfiguration> {

	NSString* _tableName;
	NSString* _className;
	NSString* _tableCreationStatement;
	NSDictionary* _schemaPlistDictionary;

}

@property (nonatomic,readonly) NSDictionary * schemaPlistDictionary;              //@synthesize schemaPlistDictionary=_schemaPlistDictionary - In the implementation block
@property (nonatomic,readonly) NSString * tableName;                              //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSString * tableCreationStatement;                 //@synthesize tableCreationStatement=_tableCreationStatement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlistName:(id)arg1 ;
-(void)parseSchemaFromDictionary:(id)arg1 ;
-(NSDictionary *)schemaPlistDictionary;
-(id)valuesFromItem:(id)arg1 ;
-(NSString *)tableCreationStatement;
-(NSString *)className;
-(NSString *)tableName;
@end

