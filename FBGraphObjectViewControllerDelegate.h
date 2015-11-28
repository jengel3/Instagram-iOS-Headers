

@protocol FBGraphObjectViewControllerDelegate <NSObject>
@optional
-(char)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 titleSuffixOfItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2;
-(void)graphObjectTableDataSource:(id)arg1 customizeTableCell:(id)arg2;

@required
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2;

@end

