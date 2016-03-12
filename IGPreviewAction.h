
#import <Instagram/IGPreviewActionItem.h>

@class NSString;

@interface IGPreviewAction : NSObject <IGPreviewActionItem> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) id handler;                     //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(id)handler;
@end

