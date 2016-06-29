

@class NSString;

@interface IGKVOObserver : NSObject {

	id _object;
	NSString* _keypath;

}

@property (nonatomic,readonly) id object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 deliverOn:(id)arg3 ;
-(id)observeOnMainWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)keypath;
-(id)initWithObject:(id)arg1 keypath:(id)arg2 ;
-(id)observe:(/*^block*/id)arg1 deliverOn:(id)arg2 ;
-(id)observeOnMain:(/*^block*/id)arg1 ;
-(id)object;
-(id)observe:(/*^block*/id)arg1 ;
@end

