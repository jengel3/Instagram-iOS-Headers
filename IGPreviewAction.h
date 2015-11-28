

@class NSString;

@interface IGPreviewAction : NSObject {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) id handler;               //@synthesize handler=_handler - In the implementation block
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(id)handler;
@end

