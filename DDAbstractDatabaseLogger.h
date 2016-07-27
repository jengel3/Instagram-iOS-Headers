
#import <Instagram/DDAbstractLogger.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface DDAbstractDatabaseLogger : DDAbstractLogger {

	unsigned saveThreshold;
	double saveInterval;
	double maxAge;
	double deleteInterval;
	char deleteOnEverySave;
	char saveTimerSuspended;
	unsigned unsavedCount;
	unsigned long long unsavedTime;
	NSObject*<OS_dispatch_source> saveTimer;
	unsigned long long lastDeleteTime;
	NSObject*<OS_dispatch_source> deleteTimer;

}

@property (assign) unsigned saveThreshold; 
@property (assign) double saveInterval; 
@property (assign) double maxAge; 
@property (assign) double deleteInterval; 
@property (assign) char deleteOnEverySave; 
-(void)performDelete;
-(void)didAddLogger;
-(void)willRemoveLogger;
-(void)destroySaveTimer;
-(void)destroyDeleteTimer;
-(void)db_saveAndDelete;
-(void)db_save;
-(void)db_delete;
-(void)performSaveAndSuspendSaveTimer;
-(void)updateDeleteTimer;
-(void)createSuspendedSaveTimer;
-(void)updateAndResumeSaveTimer;
-(void)createAndStartDeleteTimer;
-(char)db_log:(id)arg1 ;
-(unsigned)saveThreshold;
-(void)setSaveThreshold:(unsigned)arg1 ;
-(double)saveInterval;
-(void)setSaveInterval:(double)arg1 ;
-(double)deleteInterval;
-(void)setDeleteInterval:(double)arg1 ;
-(char)deleteOnEverySave;
-(void)setDeleteOnEverySave:(char)arg1 ;
-(void)savePendingLogEntries;
-(void)deleteOldLogEntries;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)logMessage:(id)arg1 ;
-(void)setMaxAge:(double)arg1 ;
-(double)maxAge;
@end

