
#import <Instagram/IGNewsFallbackCellViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGNewsBaseCellViewDelegate.h>
#import <Instagram/IGNewsDataSourceSection.h>

@protocol IGNewsDataSourceSectionDelegate, IGNewsDataSourceStoriesSectionDelegate;
@class NSString, NSOrderedSet, NSMutableDictionary;

@interface IGNewsDataSourceStoriesSection : NSObject <IGNewsFallbackCellViewDelegate, IGRaindropAnalyticsDelegate, IGNewsBaseCellViewDelegate, IGNewsDataSourceSection> {

	id<IGNewsDataSourceSectionDelegate> _delegate;
	NSString* _title;
	NSOrderedSet* _stories;
	id<IGNewsDataSourceStoriesSectionDelegate> _storiesSectionDelegate;
	NSMutableDictionary* _webViewCellSizes;

}

@property (nonatomic,readonly) NSMutableDictionary * webViewCellSizes;                                              //@synthesize webViewCellSizes=_webViewCellSizes - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSOrderedSet * stories;                                                                  //@synthesize stories=_stories - In the implementation block
@property (assign,nonatomic,__weak) id<IGNewsDataSourceStoriesSectionDelegate> storiesSectionDelegate;              //@synthesize storiesSectionDelegate=_storiesSectionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGNewsDataSourceSectionDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned* numberOfRows; 
+(id)sectionWithTitle:(id)arg1 stories:(id)arg2 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)newsFallbackCellView:(id)arg1 didCalculateHeight:(float)arg2 ;
-(NSOrderedSet *)stories;
-(void)setStoriesSectionDelegate:(id<IGNewsDataSourceStoriesSectionDelegate>)arg1 ;
-(void)setStories:(NSOrderedSet *)arg1 ;
-(NSMutableDictionary *)webViewCellSizes;
-(void)confirmCopyrightReinstatementSelectionWithActionURLString:(id)arg1 ;
-(void)newsCellView:(id)arg1 openURL:(id)arg2 ;
-(void)setUpTableView:(id)arg1 ;
-(id<IGNewsDataSourceStoriesSectionDelegate>)storiesSectionDelegate;
-(void)setDelegate:(id<IGNewsDataSourceSectionDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGNewsDataSourceSectionDelegate>)delegate;
-(NSString *)title;
-(unsigned*)numberOfRows;
-(id)tableView:(id)arg1 cellForRowAtIndex:(unsigned)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(unsigned)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned)arg2 ;
@end

