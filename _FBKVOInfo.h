

@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject {

	FBKVOController* _controller;
	NSString* _keyPath;
	unsigned _options;
	SEL _action;
	void* _context;
	/*^block*/id _block;

}
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 action:(SEL)arg5 context:(void*)arg6 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 action:(SEL)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
@end

