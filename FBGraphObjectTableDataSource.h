
#import <UIKit/UITableViewDataSource.h>

@protocol FBGraphObjectViewControllerDelegate, FBGraphObjectSelectionQueryDelegate, FBGraphObjectDataSourceDataNeededDelegate;
@class UIImage, NSString, NSArray, NSDictionary, NSMutableSet, UILocalizedIndexedCollation;

@interface FBGraphObjectTableDataSource : NSObject <UITableViewDataSource> {

	char _useCollation;
	char _itemTitleSuffixEnabled;
	char _itemPicturesEnabled;
	char _itemSubtitleEnabled;
	char _expectingMoreGraphObjects;
	char _showSections;
	UIImage* _defaultPicture;
	id<FBGraphObjectViewControllerDelegate> _controllerDelegate;
	NSString* _groupByField;
	id<FBGraphObjectSelectionQueryDelegate> _selectionDelegate;
	id<FBGraphObjectDataSourceDataNeededDelegate> _dataNeededDelegate;
	NSArray* _sortDescriptors;
	NSArray* _data;
	NSArray* _indexKeys;
	NSDictionary* _indexMap;
	NSMutableSet* _pendingURLConnections;
	UILocalizedIndexedCollation* _collation;

}

@property (nonatomic,retain) UIImage * defaultPicture;                                                      //@synthesize defaultPicture=_defaultPicture - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectViewControllerDelegate> controllerDelegate;                    //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,copy) NSString * groupByField;                                                         //@synthesize groupByField=_groupByField - In the implementation block
@property (assign,nonatomic) char useCollation;                                                             //@synthesize useCollation=_useCollation - In the implementation block
@property (assign,nonatomic) char itemTitleSuffixEnabled;                                                   //@synthesize itemTitleSuffixEnabled=_itemTitleSuffixEnabled - In the implementation block
@property (assign,nonatomic) char itemPicturesEnabled;                                                      //@synthesize itemPicturesEnabled=_itemPicturesEnabled - In the implementation block
@property (assign,nonatomic) char itemSubtitleEnabled;                                                      //@synthesize itemSubtitleEnabled=_itemSubtitleEnabled - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectSelectionQueryDelegate> selectionDelegate;                     //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectDataSourceDataNeededDelegate> dataNeededDelegate;              //@synthesize dataNeededDelegate=_dataNeededDelegate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                                       //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * data;                                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * indexKeys;                                                           //@synthesize indexKeys=_indexKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * indexMap;                                                       //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingURLConnections;                                          //@synthesize pendingURLConnections=_pendingURLConnections - In the implementation block
@property (assign,nonatomic) char expectingMoreGraphObjects;                                                //@synthesize expectingMoreGraphObjects=_expectingMoreGraphObjects - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                                       //@synthesize collation=_collation - In the implementation block
@property (assign,nonatomic) char showSections;                                                             //@synthesize showSections=_showSections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPendingURLConnections:(NSMutableSet *)arg1 ;
-(void)setExpectingMoreGraphObjects:(char)arg1 ;
-(void)setIndexKeys:(NSArray *)arg1 ;
-(void)setIndexMap:(NSDictionary *)arg1 ;
-(void)prepareForNewRequest;
-(char)filterIncludesItem:(id)arg1 ;
-(id)indexKeyOfItem:(id)arg1 ;
-(char)useCollation;
-(void)setShowSections:(char)arg1 ;
-(void)setSortingByFields:(id)arg1 ascending:(char)arg2 ;
-(NSArray *)indexKeys;
-(char)isLastSection:(int)arg1 ;
-(id)sectionItemsForSection:(int)arg1 ;
-(void)addOrRemovePendingConnection:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(UIImage *)defaultPicture;
-(NSMutableSet *)pendingURLConnections;
-(char)expectingMoreGraphObjects;
-(id<FBGraphObjectDataSourceDataNeededDelegate>)dataNeededDelegate;
-(char)showSections;
-(id)cellWithTableView:(id)arg1 ;
-(char)isActivityIndicatorIndexPath:(id)arg1 ;
-(char)itemPicturesEnabled;
-(id)tableView:(id)arg1 imageForItem:(id)arg2 ;
-(char)itemTitleSuffixEnabled;
-(char)itemSubtitleEnabled;
-(void)setUseCollation:(char)arg1 ;
-(id)fieldsForRequestIncluding:(id)arg1 ;
-(void)clearGraphObjects;
-(void)appendGraphObjects:(id)arg1 ;
-(char)hasGraphObjects;
-(void)bindTableView:(id)arg1 ;
-(void)cancelPendingRequests;
-(void)setSortingBySingleField:(id)arg1 ascending:(char)arg2 ;
-(void)setDefaultPicture:(UIImage *)arg1 ;
-(void)setItemTitleSuffixEnabled:(char)arg1 ;
-(void)setItemPicturesEnabled:(char)arg1 ;
-(void)setItemSubtitleEnabled:(char)arg1 ;
-(void)setDataNeededDelegate:(id<FBGraphObjectDataSourceDataNeededDelegate>)arg1 ;
-(NSDictionary *)indexMap;
-(id)titleForSection:(int)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(id<FBGraphObjectSelectionQueryDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<FBGraphObjectSelectionQueryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)update;
-(NSArray *)sortDescriptors;
-(id<FBGraphObjectViewControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<FBGraphObjectViewControllerDelegate>)arg1 ;
-(void)setGroupByField:(NSString *)arg1 ;
-(NSString *)groupByField;
-(id)itemAtIndexPath:(id)arg1 ;
@end

