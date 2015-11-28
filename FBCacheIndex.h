
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol FBCacheIndexFileDelegate, OS_dispatch_queue;
@class NSCache, NSObject, NSString;

@interface FBCacheIndex : NSObject <NSCacheDelegate> {

	id<FBCacheIndexFileDelegate> _delegate;
	NSCache* _cachedEntries;
	unsigned _currentDiskUsage;
	unsigned _diskCapacity;
	sqlite3Ref _database;
	sqlite3_stmtRef _insertStatement;
	sqlite3_stmtRef _removeByKeyStatement;
	sqlite3_stmtRef _selectByKeyStatement;
	sqlite3_stmtRef _selectByKeyFragmentStatement;
	sqlite3_stmtRef _selectExcludingKeyFragmentStatement;
	sqlite3_stmtRef _trimStatement;
	sqlite3_stmtRef _updateStatement;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (assign) id delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned currentDiskUsage;                               //@synthesize currentDiskUsage=_currentDiskUsage - In the implementation block
@property (assign,nonatomic) unsigned diskCapacity;                                     //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned entryCacheCountLimit; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fetchCurrentDiskUsage;
-(id)_entryForKey:(id)arg1 ;
-(void)_writeEntryInDatabase:(id)arg1 ;
-(void)_trimDatabase;
-(void)_removeEntryFromDatabaseForKey:(id)arg1 ;
-(id)_readEntriesFromDatabase:(id)arg1 excludingFragment:(char)arg2 ;
-(id)_readEntryFromDatabase:(id)arg1 ;
-(void)_updateEntryInDatabaseForKey:(id)arg1 entry:(id)arg2 ;
-(id)_createCacheEntityInfo:(sqlite3_stmtRef)arg1 ;
-(void)_dropTrimmingTable;
-(void)_flushOrphanedFiles;
-(id)initWithCacheFolder:(id)arg1 ;
-(unsigned)entryCacheCountLimit;
-(void)setEntryCacheCountLimit:(unsigned)arg1 ;
-(id)fileNameForKey:(id)arg1 ;
-(id)storeFileForKey:(id)arg1 withData:(id)arg2 ;
-(void)removeEntries:(id)arg1 excludingFragment:(char)arg2 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(void)removeEntryForKey:(id)arg1 ;
-(unsigned)currentDiskUsage;
-(void)setDiskCapacity:(unsigned)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(unsigned)diskCapacity;
@end

