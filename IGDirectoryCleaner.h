

@interface IGDirectoryCleaner : NSObject
+(id)trashPath;
+(void)performFolderCleanup:(id)arg1 removeRootFolder:(char)arg2 ;
+(id)trashPathForPath:(id)arg1 ;
+(void)startBackgroundTrashCleanupTask;
+(char)trashItemAtPath:(id)arg1 error:(id*)arg2 ;
@end

