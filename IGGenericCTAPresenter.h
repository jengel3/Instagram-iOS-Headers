
#import <Instagram/IGCTAPresenterProtocol.h>

@class IGCTAPresenterContext, NSString;

@interface IGGenericCTAPresenter : NSObject <IGCTAPresenterProtocol> {

	IGCTAPresenterContext* _context;

}

@property (nonatomic,readonly) IGCTAPresenterContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForCTA;
-(IGCTAPresenterContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

