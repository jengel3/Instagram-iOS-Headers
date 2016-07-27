

@class NSMapTable;

@interface FBKVOController : NSObject {

	NSMapTable* _objectInfosMap;
	int _lock;
	id _observer;

}

@property (__weak,readonly) id observer;              //@synthesize observer=_observer - In the implementation block
+(id)controllerWithObserver:(id)arg1 ;
-(void)unobserveAll;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 action:(SEL)arg4 ;
-(id)initWithObserver:(id)arg1 retainObserved:(char)arg2 ;
-(void)_observe:(id)arg1 info:(id)arg2 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)_unobserve:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 ;
-(void)_unobserveAll;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned)arg3 action:(SEL)arg4 ;
-(void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)unobserve:(id)arg1 keyPath:(id)arg2 ;
-(void)unobserve:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)observer;
-(id)initWithObserver:(id)arg1 ;
@end

