

@class NSHashTable;

@interface _FBKVOSharedController : NSObject {

	NSHashTable* _infos;
	int _lock;

}
+(id)sharedController;
-(void)observe:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 infos:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

