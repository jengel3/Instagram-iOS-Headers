
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UITableViewDelegate.h>

@class IGFeedItemHideHandler, UITableView, NSMutableDictionary, NSString;

@interface IGFeedItemHiddenNoReasonSelectedCell : UICollectionViewCell <UITableViewDelegate> {

	IGFeedItemHideHandler* _hideHandler;
	UITableView* _tableView;
	NSMutableDictionary* _headersCache;

}

@property (nonatomic,retain) IGFeedItemHideHandler * hideHandler;               //@synthesize hideHandler=_hideHandler - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headersCache;              //@synthesize headersCache=_headersCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForFeedItem:(id)arg1 ;
-(void)configureForHideHandler:(id)arg1 ;
-(void)setHideHandler:(IGFeedItemHideHandler *)arg1 ;
-(IGFeedItemHideHandler *)hideHandler;
-(NSMutableDictionary *)headersCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)prepareForReuse;
@end

