
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemDirectResponseLoggingProviderDelegate.h>

@class IGListAdapter, NSString;

@interface IGFeedItemLogger : NSObject <IGFeedItemLoggingProviderDelegate, IGFeedItemDirectResponseLoggingProviderDelegate> {

	IGListAdapter* _listAdapter;
	unsigned _mediaCellIndex;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;              //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) unsigned mediaCellIndex;                  //@synthesize mediaCellIndex=_mediaCellIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(unsigned)mediaCellIndex;
-(unsigned)offsetSectionForFeedItem:(id)arg1 inList:(id)arg2 atSection:(unsigned)arg3 ;
-(id)initWithListAdapter:(id)arg1 mediaCellIndex:(unsigned)arg2 ;
@end

