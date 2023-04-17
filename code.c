#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void enrollmentpro();
void facetofaceenr();
void onlineenr();
void admissionpro();
void facetofacead();
void onlinead();
void req();
void contact();
void course();
void studata();
void gradesheet();
void addrop();
void admission();
void request();

//MAIN DEVELOPER : FLORES, JUSTINE FRITZ
//CO DEVELOPER : PANIZA, MARK LORENZE | LANDA, JUVENYL ANNE | COSIO, SHANNAH LIL | ALMINAZA, MARIA GIEZZA OF BSCS 1-B
int main(){ //BY FLORES, JUSTINE FRITZ
    char choice[40];
    printf("\n\n\t\t\tILOILO SCIENCE AND TECHNOLOGY UNIVERSITY");
    printf("\n\t\tILOILO CITY CAMPUS | Burgos Street, La Paz, Iloilo City");
    printf("\n\n\n\t\t    OFFICE OF THE UNIVERSITY REGISTRAR AND ADMISSION\n\n\t*MISSION");
    printf("\n\t-THE OFFICE OF THE UNIVERSITY REGISTRAR AS AN ACADEMIC NON-TEACHING UNIT,");
    printf("\n\t IS COMMITTED TO PROVIDE SUPPORT SERVICES TO ADMINISTRATION AND INSTRUCTION");
    printf("\n\t TO HELP ISAT U ACHIEVE ITS GOALS AND OBJECTIVES.\n\n\t*VISION");
    printf("\n\t-THE OFFICE OF THE UNIVERSITY REGISTRAR AS THE FRONTLINE IN EXCELLENT");
    printf("\n\t SERVICE TO STUDENTS, ALUMNI, FACULTY MEMBERS, AND THE GENERAL PUBLIC.");
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tI N F O R M A T I O N  S E C T I O N\n");
    printf("\n\tENROLLMENT PROCESS\n\n\tADMISSION PROCESS\n\n\tCONTACT INFORMATION\n\n\tCOURSES\n\n\tEXIT\n");
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\t   F R O N T L I N E  S E R V I C E\n");
    printf("\n\tSTUDENT DATA\n\n\tADMISSION\n\n\tGRADE SHEET\n\n\tREQUEST\n\n\tADDING / DROPPING\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "ENROLLMENT PROCESS") == 0 ){
        enrollmentpro();
    }
        else if (strcmp(choice, "ADMISSION PROCESS") == 0){ 
            admissionpro();
        }
            else if (strcmp(choice, "CONTACT INFORMATION") == 0){ 
                contact();
            }
                else if (strcmp(choice, "COURSES") == 0){
                    course();
                }
                    else if (strcmp(choice, "STUDENT DATA") == 0){ 
                        studata();
                    }
                        else if (strcmp(choice, "ADMISSION") == 0){ 
                            admission();
                        }
                            else if (strcmp(choice, "GRADE SHEET") == 0){ 
                                gradesheet();
                            }
                                else if (strcmp(choice, "REQUEST") == 0){ 
                                    request();
                                }   
                                    else if (strcmp(choice, "ADDING / DROPPING") == 0){ 
                                        addrop();
                                    }
                                    else if (strcmp(choice, "EXIT") == 0){
                                    printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
                                    }
                                        else{ 
                                            printf("\tYou've made a mistake , Try again..\n\n\n"), main();
                                        }   
}
void enrollmentpro(){ // BY FLORES, JUSTINE FRITZ
    char choice[40];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\t\tE N R O L L M E N T");
    printf("\n\n\tFACE TO FACE\n\n\tONLINE\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    if (strcmp(choice, "FACE TO FACE\n") == 0){ 
        facetofaceenr(); 
    }
        else if (strcmp(choice, "ONLINE\n") == 0){ 
            onlineenr();
        }
            else if (strcmp(choice, "MAIN MENU\n") == 0){ 
                main(); 
            }
                else if (strcmp(choice, "EXIT\n") == 0){ 
                    printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n"); }
                    else { 
                        printf("\tYou've made a mistake , Try again..\n\n\n"), enrollmentpro();
                    }   
}
void facetofaceenr(){ // BY PANIZA, MARK LORENZE
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tF A C E  T O  F A C E  E N R O L L M E N T  P R O C E S S\n");
    int step = 1;
    char response;
    while (step <= 12) {
        switch (step) {
            case 1:
                printf("\n\t Step 1: Department Head / Enrollment Committee\n");
                printf("\t\t-Student submits enrollment requirements for initial evaluation.\n");
                printf("\t\t-Student fill-up the pre-registration form.\n");
                printf("\t\t-Department Head/Enrollment Committee advises student and subject/s to enroll.\n");
                break;
            case 2:
                printf("\n\t Step 2: Cashier's Office\n");
                printf("\t\t-Students submits pre-registration form for appraisal of fees.\n");
                printf("\t\t-Student pays the required fee.\n");
                break;
            case 3:
                printf("\n\t Step 3: Department Head/Enrollment Committee\n");
                printf("\t\t-Student submits pre-registration and official receipt for printing of registration form.\n");
                break;
            case 4:
                printf("\n\t Step 4: Dean's Office\n");
                printf("\t\t-Student submits pre-registration form and enrollment requirements for checking and approval.\n");
                break;
            case 5:
                printf("\n\t Step 5: OURA\n");
                printf("\t\t-OURA checks the completeness of the requirement submitted.\n");
                printf("\t\t-OURA confirms the student enrollment in the registration system.\n");
                break;
            case 6:
                printf("\n\t Step 6: Medical/Dental Clinic\n");
                printf("\t\t-Student undergoes physical and dental examination.\n");
                printf("\t\t-Gets referrals for medical examination.\n");
                break;
            case 7:
                printf("\n\t Step 7: MIS/EDP\n");
                printf("\t\t-Student presents registration form and referrals from the medical clinic for picture taking to be used for school id and library card.\n");
                break;
            case 8:
                printf("\n\t Step 8: OSAS\n");
                printf("\t\t-Student presents registration form for issuance and validation of school id.\n");
                break;
            case 9:
                printf("\n\t Step 9: Library\n");
                printf("\t\t-Student presents registration form for issuance and validation of library card.\n");
                break;
            case 10:
                printf("\n\t Step 10: Dean's Office\n");
                printf("\t\t-Student views posting of class schedules.\n");
                break;
            case 11:
                printf("\n\t Step 11: Student\n");
                printf("\t\t-Student reports to class as scheduled.\n");
                break;
            case 12:
                printf("\n\t Step 12: Faculty\n");
                printf("\t\t-Faculty admits student who are listed in the official class list.\n");
                break;
        }
        printf("\n\t\tGo to next step? (y/n) ");
        scanf(" %c", &response);
        while (response != 'y' && response != 'Y') {
            printf("\n\t\tPlease complete the current step before proceeding.\n");
            printf("\t\tGo to next step? (y/n) ");
            scanf(" %c", &response);
        }
        step++;
    }
    fflush(stdin);
    printf("\n\tCongratulations! You have completed the face to face enrollment process.\n"), req();
}
void onlineenr(){ // BY PANIZA, MARK LORENZE
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tO N L I N E  E N R O L L M E N T  P R O C E S S\n");
    int step = 1;
    char response;
    while (step <= 4) {
        switch (step) {
            case 1:
                printf("\n\tStep 1: Pre-Enrollment\n");
		        printf("\t\t-Student access the Enrollment Link: .isatu.edu.ph using a browswer.\n");
		        printf("\t\t-Student fill-up the Online Pre-Enrollment.\n");
		        printf("\t\t-Student submits the Pre-Enrollment.\n");
		        break;
	        case 2:
		        printf("\n\tStep 2: Assessment\n");
		        printf("\t\t-Enrollment Committee reviews and validates Student's Pre-Enrollment submitted online.\n");
		        break;
	        case 3:
		        printf("\n\tStep 3: Confirmation\n");
		        printf("\t\t-OURA confirms enrollment of student based on the submitted Pre-Enrollment from the Dean's Offices.\n");
		        printf("\t\t-OURA prints Pre-Registration Form for filing.\n");
		        break;
	        case 4:
		        printf("\n\tStep 4: Email Student\n");
	            printf("\t\t-Online Enrollment System emails student the Confirmation of subjects/s enrolled.\n");
	            printf("\t\tNOTE: STUDENT WAITS FOR CONFIRMATION OF SUBJECTS ENROLLED WITHIN A WEEK FROM THE DATE OF SUBMISSION\n");
	            break;
        }
        printf("\n\t\tGo to next step? (y/n) ");
        scanf(" %c", &response);
        while (response != 'y' && response != 'Y') {
            printf("\n\t\tPlease complete the current step before proceeding.\n");
            printf("\t\tGo to next step? (y/n) ");
            scanf(" %c", &response);
        }
        step++;
    }
    fflush(stdin);
    printf("\n\tCongratulations! You have completed the online enrollment process.\n"), req();
} 
void admissionpro(){ // BY FLORES, JUSTINE FRITZ
    char choice[40];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\t\tA D M I S S I O N");
    printf("\n\n\tFACE TO FACE\n\n\tONLINE\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "FACE TO FACE") == 0){
        facetofacead();
    }
        else if (strcmp(choice, "ONLINE") == 0){
    	    onlinead();
        }
            else if (strcmp(choice, "MAIN MENU") == 0){
                main();
            }
                else if (strcmp(choice, "EXIT") == 0){
                    printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
                }
                    else {
                        printf("\tYou've made a mistake , Try again..\n\n\n"), admissionpro();
                        }   
}
void facetofacead(){ // BY PANIZA, MARK LORENZE
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tF A C E  T O  F A C E  A D M I S S I O N  P R O C E S S\n");
    int step = 1;
    char response;
    while (step <= 4) {
        switch (step) {
            case 1:
                printf("\n\t Step 1: OURA\n\n");
                printf("\t\t-Fill-up Application Form for Admission.\n");
                printf("\t\t-Submit accomplished Application Form for Admission together with the Admission requirements.\n");
                break;
            case 2:
                printf("\n\t Step 2: Cashier's Office\n\n");
                printf("\t\t-Applicant pays the required fee. (If applicable)\n");
                break;
            case 3:
                printf("\n\t Step 3: OURA\n\n");
                printf("\t\t-Applicant submits Admission Form,Admission requirements and Official Receipt.\n");
                printf("\t\t-OURA encodes Applicant's Information and issues Admission Number.\n");
                break;
            case 4:
                printf("\n\t Step 4: OSAS\n\n");
                printf("\t\t-Applicant submits Application Form for Admission.\n");
                printf("\t\t-OSAS validates the Admission Number of applicant.\n");
                printf("\t\t-OSAS schedules the University Admisstion Test of the applicant.\n");
                break;
        }
        printf("\n\t\tGo to next step? (y/n) ");
        scanf(" %c", &response);
        while (response != 'y' && response != 'Y') {
            printf("\n\t\tPlease complete the current step before proceeding.\n");
            printf("\t\tGo to next step? (y/n) ");
            scanf(" %c", &response);
        }
        step++;
    }
    fflush(stdin);
    printf("\t\tCongratulations! You have completed the face-to-face admission process.\n"), req();
}
void onlinead(){ // BY PANIZA, MARK LORENZE
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tO N L I N E  A D M I S S I O N  P R O C E S S\n");
    int step = 1;
    char response;
    while (step <= 4) {
        switch (step) {
            case 1:
                printf("\n\tStep 1: Registration\n");
		        printf("\t\t-Applicant access the link for the Online Application for Admission.\n");
		        printf("\t\t-Applicant fill-in the Online Application for Admission.\n");
		        printf("\t\t-Applicant uploads Admission Requirements in the online portal\n");
		        printf("\t\tNOTE: ALL ADMISSION REQUIREMENTS SUBMMITED MUST BE IN PDF FILE FORMAT\n");
		        break;
	        case 2:
		        printf("\n\tStep 2: Verification of Admission Requirements\n");
		        printf("\t\t-OURA verifies the authenticty of submiited admission credentials uploaded in the system.\n");
		        printf("\t\t-OURA issues Admission Number through email.\n");
		        break;
	        case 3:
		        printf("\n\tStep 3: Schedule of Examination\n");
		        printf("\t\t-OSAS schedules the University Admission Test of the applicant.\n");
		        printf("\t\t-OSAS sends schedule/notice of University Admission Test of applicants through email.\n");
		        break;
	        case 4:
		        printf("\n\tStep 4: Examination, Interview and Posting\n");
	            printf("\t\t-Applicant takes the Computer-Based University Admission Test as scheduled.\n");
	            printf("\t\t-Applicant views posting of qualified applicants to take the Aptitude Test as scheduled. (If applicable)\n");
	            printf("\t\t-Applicant views posting of qualified applicants for Interview.\n");
	            printf("\t\t-Applicant views posting of qualified applicants for Enrollment.\n");
	            printf("\t\tNOTE: APPLICANTS MUST VIEW ISAT UNIVERSITY-PUBLIC INFORMATION OFFICE FB PAGE FOR UPDATES\n");
	            break;
        }
        printf("\n\t\tGo to next step? (y/n) ");
        scanf(" %c", &response);
        while (response != 'y' && response != 'Y') {
            printf("\n\t\tPlease complete the current step before proceeding.\n");
            printf("\t\tGo to next step? (y/n) ");
            scanf(" %c", &response);
        }
        step++;
    }
    fflush(stdin);
    printf("\t\tCongratulations! You have completed the online enrollment process.\n"), req();
} 
void req(){ // BY LANDA, JUVENYL ANNE
    char choice[20];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tR E Q U I R E M E N T S  F O R  E N R O L L M E N T  /  A D M I S S I O N\n");
    printf("\n\n\tOption 1: For Baccalaureate Degree/College Students");
    printf("\n\n\tOption 2: For Advanced Edsucation Students");
    printf("\n\n\tOption 3: For Technical Vocational Education Students");
    printf("\n\n\tOption 4: For Diploma in Teaching Students");
    printf("\n\n\tOption 5: For Cross-Enrolees Students");
    printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "Option 1") == 0){
        printf("\n\t\t\tFor Baccalaureate Degree/College Students\n");
        printf("\n\n\t- Application for Admission Form\n");
        printf("\n\t- Original Senior High School Card (For Senior High School Graduate)\n");
        printf("\n\t- Original Certificate of Rating (For ALS Passer)\n");
        printf("\n\t- Original Certificate of Good Moral Character\n");
        printf("\n\t- Machine copy of NSO/PSA Birth Certificate\n");
        printf("\n\t- Machine copy of NSO/PSA Marriage Contract (if applicable)\n");
        req();
    }
        else if (strcmp(choice, "Option 2") == 0){
            printf("\n\t\t\tFor Advanced Education Students\n");
            printf("\n\t- Application for Admission Form\n");
            printf("\n\t- Machine copy of Official Transcript of Records\n");
            printf("\n\t- Original Certificate of Transfer Credentials (For Transferees)\n");
            printf("\n\t- Original Certificate of Good Moral\n");
            printf("\n\t- Machine copy of NSO/PSA Birth Certificate\n");
            printf("\n\t- Machine copy of NSO/PSA Marriage Contract (if applicable)\n");
            req();
        }
            else if (strcmp(choice, "Option 3") == 0){
                printf("\n\t\t\tFor Technical Vocational Education Students\n");
                printf("\n\t- Application for Admission Form\n");
                printf("\n\t- Original Senior High School Card (For Senior High School Graduate)\n");
                printf("\n\t- Machine copy of Official Transcript of Records\n");
                printf("\n\t- Original Police Clearance\n");
                printf("\n\t- Machine copy of NSO/PSA Birth Certificate\n");
                printf("\n\t- Machine copy of NSO/PSA Marriage Contract (if applicable)\n");
                req();
            }
                else if (strcmp(choice, "Option 4") == 0){
                    printf("\n\t\t\tFor Diploma in Teaching Students\n");
                    printf("\n\t- Application for Admission Form\n");
                    printf("\n\t- Machine copy of Official Transcript of Records\n");
                    printf("\n\t- Original Certificate of Good Moral\n");
                    printf("\n\t- Machine copy of NSO/PSA Birth Certificate\n");
                    printf("\n\t- Machine copy of NSO/PSA Marriage Contract (if applicable)\n");
                    req();
                }
                    else if (strcmp(choice, "Option 5") == 0){
                        printf("\n\t\t\tFor Cross-Enrolees Students\n");
                        printf("\n\t- Application for Admission Form\n");
                        printf("\n\t- Permit to Cross Enrolled from the School of Origin\n");
                        printf("\n\t- Machine copy of NSO/PSA Authenticated Birth Certificate\n");
                        printf("\n\t- Machine copy of NSO/PSA Marriage Contract (if applicable)\n");
                        req();
                    }
                        else if (strcmp(choice, "MAIN MENU") == 0){
                            main();
                        }
                            else if (strcmp(choice, "EXIT") == 0){
                                printf("\tThanks for using this program.\n\n");
                            }
                                else {
                                   printf("\tYou've made a mistake , Try again..\n\n\n"),  req();
                                }
}
void course(){ // BY FLORES, JUSTINE FRITZ
    char choice[30];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tC U R R I C U L A R  O F F E R I N G S\n");
    printf("\n\n\tILOILO CITY CAMPUS\n\n\tMIAGAO CAMPUS\n\n\tLEON CAMPUS\n\n\tDUMANGGAS CAMPUS\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    if (strcmp(choice, "ILOILO CITY CAMPUS\n") == 0){
        printf("\n\n=========================================================================================\n\n");
        printf("\n\t\t\tI L O I L O  C I T Y  C A M P U S\n");
        printf("\n\n-----------------------------------------------------------------------------------------\n\n");
        printf("\t\t   **COLLEGE OF ENGINEERING AND ARCHITECTURE**");
        printf("\n\tBachelor of Science in Architecture");
        printf("\n\tBachelor of Science in Civil Engineering");
        printf("\n\tBachelor of Science in Electrical Engineering");
        printf("\n\tBachelor of Science in Electronics Engineering");
        printf("\n\tBachelor of Science in Mechanical Engineering");
        printf("\n\n-----------------------------------------------------------------------------------------\n\n");
        printf("\t\t   **COLLEGE OF ARTS AND SCIENCE**");
        printf("\n\tMaster of Science in Mathematics");
        printf("\n\tMaster of Science in Computer Science");
        printf("\n\tBachelor of Science in Community Development");
        printf("\n\tBachelor of Science in Human Services");
        printf("\n\tBachelor of Science in Computer Science");
        printf("\n\tBachelor of Science in Information Technology");
        printf("\n\tBachelor of Science in Information Systems");
        printf("\n\tBachelor of Science in Mathematics");
        printf("\n\tBachelor of Science in Biology (Biotechnology)");
        printf("\n\tBachelor of Arts in English Language");
        printf("\n\n-----------------------------------------------------------------------------------------\n\n");
        printf("\t\t   **COLLEGE OF EDUCATION**");
        printf("\n\tBachelor of Elementary Education");
        printf("\n\tBachelor of Secondary Education majors in:");
        printf("\n\t ~Filipino\n\t ~Mathematics\n\t ~Science");
        printf("\n\tBachelor of Technology and Livelihood Education majors in:");
        printf("\n\t ~Home Economics\n\t ~Industrial Arts\n\t ~Information and Communication Technology");
        printf("\n\tBachelor of Technical Vocational Teacher Education majors in:");
        printf("\n\t ~Architectural Drafting\n\t ~Automotive Technology\n\t ~Beauty Care and Wellness");
        printf("~Computer Programming\n\t ~Electrical Technology\n\t ~Electronics Technology\n\t ~Food and Service Management");
        printf("\n\n-----------------------------------------------------------------------------------------\n\n");
        printf("\t\t   **COLLEGE OF INDUSTRIAL TECHNOLOGY**"); 
        printf("\n\tBachelor of Science in Entrepreneurship");
        printf("\n\tBachelor of Science in Fashion Design and Merchandizing");
        printf("\n\tBachelor of Science in Hospitality Management majors in:");
        printf("\n\t ~Culinary Arts\n\t ~Cruise Ship");
        printf("\n\tBachelor of Science in Tourism Management");
        printf("\n\tBachelor of Industrial Technology majors in:");
        printf("\n\t ~Architectural Drafting Technology\n\t ~Automotive Technology\n\t ~Civil Technology\n\t ~Cosmetology");
        printf("\n\t ~Electrical Technology\n\t ~Electronics Technology\n\t ~Fashion and Apparel Technology");
        printf("\n\t ~Food Technology\n\t ~Heating Ventilating Air Conditioning-Refrigeration Technology");
        printf("\n\t ~Mechanical Technology\n\t ~Welding and Fabrication Technology");
        course();
    }
        else if (strcmp(choice, "MIAGAO CAMPUS\n") == 0){
            printf("\n\n=========================================================================================\n\n");
            printf("\n\t\t\tM I A G A O  C A M P U S\n");
            printf("\n\n-----------------------------------------------------------------------------------------\n\n");
            printf("\n\tBachelor of Elementary Education");
            printf("\n\tBachelor of Secondary Education majors in:");
            printf("\n\t ~English\n\t ~Filipino\n\t ~Math\n\t ~Science\n\t ~Social Studies");
            printf("\n\tBachelor of Technical Vocational Teacher Education majors in:");
            printf("\n\t ~Automotive Technology\n\t ~Electrical Technology\n\t ~Food Service Management");
            printf("\n\t ~Drafting Technology\n\t ~Electronics Technology\n\t ~Garmets, Fasion & Design");
            printf("\n\tBachelor of Technical Vocational Teacher Education majors in:");
            printf("\n\t ~Home Economics\n\t ~Industrial Arts");
            printf("\n\tBachelor of Science in Information Technology");
            printf("\n\tBachelor of Science in Information Systems");
            printf("\n\tBachelor of Science in Hospitality Management");
            printf("\n\tBachelor of Science in Tourism Management");
            printf("\n\tBachelor of Science in Entrepreneurship");
            printf("\n\t ~Architectural Drafting Technology\n\t ~Automotive Technology\n\t ~Cosmetology");
            printf("\n\t ~Electrical Technology\n\t ~Electronics Technology\n\t ~Fashion and Apparel Technology");
            printf("\n\t ~Food Technology\n\t ~Heating Ventilating Air Conditioning-Refrigeration Technology");
            printf("\n\t ~Welding and Fabrication Technology");
            course();
        }
            else if (strcmp(choice, "LEON CAMPUS\n") == 0){
                printf("\n\n=========================================================================================\n\n");
                printf("\n\t\t\tL E O N  C A M P U S\n");
                printf("\n\n-----------------------------------------------------------------------------------------\n\n");
                printf("\n\tBachelor of Science in Agriculture majors in:");
                printf("\n\t ~Crop Science\n\t ~Animal Science");
                printf("\n\tBachelor of Technical-Vocational Teacher Education");
                printf("\n\t ~Agricultural Crops Production");
                printf("Bachelor of Technology and Livelihood Education major in:");
                printf("\n\t ~Agri-Fishery Arts");
                course();
            }
                else if (strcmp(choice, "DUMANGGAS CAMPUS\n") == 0){
                    printf("\n\n=========================================================================================\n\n");
                    printf("\n\t\t\tD U M A N G G A S  C A M P U S\n");
                    printf("\n\n-----------------------------------------------------------------------------------------\n\n");
                    printf("\n\tBachelor of Science in Entrepreneurship");
                    printf("\n\tBachelor of Science in Hospitality Management");
                    printf("\n\tBachelor of Science in Information Technology");
                    printf("\n\tBachelor of Industrial Technology major in");
                    printf("\n\t ~Architectural Drafting\n\t ~Electrical Technology\n\t ~Electronics Technology\n\t ~Automotive Technology");
                    printf("\n\tBachelor of Technical-Vocational Teacher Education major in:");
                    printf("\n\t ~Computer Hardware Servicing\n\t ~Food Service Management");
                    printf("\n\t ~Electronics Technology\n\t ~Electrical Technology");
                    course();
                }
                    else if (strcmp(choice, "BAROTAC NUEVO CAMPUS\n") == 0){
                        printf("\n\n=========================================================================================\n\n");
                        printf("\n\t\t\tB A R O T A C  N U E V O  C A M P U S\n");
                        printf("\n\n-----------------------------------------------------------------------------------------\n\n");
                        printf("\n\tBachelor of Science in Entrepreneurship");
                        printf("\n\tBachelor of Science in Hospitality Management");
                        printf("\n\tBachelor of Industrial Technology major in");
                        printf("\n\t ~Architectural Drafting\n\t ~Electrical Technology\n\t ~Electronics Technology\n\t ~Automotive Technology");
                        printf("\n\tBachelor of Elementary Education");
                        printf("\n\tBachelor of Secondary Education majors in: \n\t ~Math");;
                        printf("Bachelor of Technical-Vocational Teacher Education major in:");
                        printf("\n\t ~Automotive Technology\n\t ~Computer Hardware Servicing");
                        course();
                    }
                        else if (strcmp(choice, "MAIN MENU\n") == 0){
                            main();
                        }
                            else if (strcmp(choice, "EXIT\n") == 0){
                                printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
                            }
                                else {
                                    printf("\tYou've made a mistake , Try again..\n\n\n"), course();
                                } 
}
void contact(){ // BY COSIO, SHANNAH LIL
    char choice[20];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tC O N T A C T  I N F O R M A T I O N\n");
    printf("\n\n\tOffice of the University Registrar and Admission : (033) 3207190 local 160");
    printf("\n\n\tFax : (033) 3294274");
    printf("\n\n\tEmail Address : registrar@isatu.edu.ph");
    printf("\n\n\tCounter Request Section : (033) 3207190 local 360");
    printf("\n\n\tVerification Section : (033) 3207190 local 110");
    printf("\n\n\tRecords Management Section : (033) 3297190 local 310");
    printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "MAIN MENU") == 0){
        main();
    }
        else if (strcmp(choice, "EXIT") == 0){
            printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
        }
            else{
                printf("\tYou've made a mistake , Try again..\n\n\n"), contact();
            }   
}
void studata() // BY FLORES, JUSTINE FRITZ
{
    FILE* fp;
    char filename[] = "draft.txt", studentid[30], new_filename[30], name[40], course[40], choice[20], grade[20], id[20], subjectname[20],
         subjdescr[40], age[10], address[40], date_of_birth[40], place_of_birth[40], sex[10], sy[20], sems[20];
    int result, subject, starter = 1;
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tS T U D E N T  D A T A\n");
    printf("\n\tSTUDENT ID NUMBER : ");
    fgets(studentid, sizeof(studentid), stdin);
    studentid[strcspn(studentid, "\n")] = 0;
    fp = fopen(filename, "a");
    fclose(fp);
    sprintf(new_filename, "STUDENT DATA/%s.txt", studentid);
    result = rename(filename, new_filename);

    fp = fopen(new_filename, "a");
    new_filename[strcspn(new_filename, "\n")] = 0;
    printf("\n\tSEMESTER : ");
    fgets(sems, sizeof(sems), stdin);
    sems[strcspn(sems, "\n")] = 0;
    if (strcmp(sems, "1ST SEMESTER") == 0){
        printf("\n\tSTUDENT NAME : ");
        fflush(stdin);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
        fprintf(fp, "==============================P E R S O N A L  D A T A==============================\n");
        fprintf(fp, "==============================1 S T  S E M E S T E R==============================\n");
        fprintf(fp, "STUDENT NAME : %s\n", name);
        printf("\n\tAGE : ");
        fflush(stdin);
        fgets(age, sizeof(age), stdin);
        age[strcspn(age, "\n")] = 0;
        fprintf(fp, "AGE : %s\n", age);
        printf("\n\tSEX : ");
        fflush(stdin);
        fgets(sex, sizeof(sex), stdin);
        sex[strcspn(sex, "\n")] = 0;
        fprintf(fp, "SEX : %s\n", sex);
        fprintf(fp, "ID NUMBER : %s\n", studentid);
        fflush(stdin);
        printf("\n\tCOURSE, YEAR, & SECTION : ");
        fflush(stdin);
        fgets(course, sizeof(course), stdin);
        course[strcspn(course, "\n")] = 0;
        fprintf(fp, "COURSE & SECTION : %s\n", course);
        fprintf(fp, "===============================C O U R S E  D A T A===============================\n");
        printf("\n\tNUMBER OF SUBJECTS : ");
        scanf("%d", &subject);
        printf("\n\tSchool Year : ");
        fflush(stdin);
        fgets(sy, sizeof(sy), stdin);
        sy[strcspn(sy, "\n")] = 0;
        fprintf(fp, "SCHOOL YEAR : %s\n", sy);
        fprintf(fp, "SEMESTER : %s\n", sems);
            if (subject != 0){
                while(starter <= subject){
                    printf("\n\tSUBJECT NAME : ");
                    fflush(stdin);
                    fgets(subjectname, sizeof(subjectname), stdin);
                    subjectname[strcspn(subjectname, "\n")] = 0;
                    fprintf(fp, "SSUBJECT NAME : %s\n", subjectname);
                    printf("\n\tSUBJECT DESCRIPTION : ");
                    fflush(stdin);
                    fgets(subjdescr, sizeof(subjdescr), stdin);
                    subjdescr[strcspn(subjdescr, "\n")] = 0;
                    fprintf(fp, "SUBJECT DESCRIPTIONn : %s\n", subjdescr);
                    printf("\n\tGRADE : ");
                    fflush(stdin);
                    fgets(grade, sizeof(grade), stdin);
                    grade[strcspn(grade, "\n")] = 0;
                    fprintf(fp, "GRADE : %s\n", grade);
                    fflush(stdin);
                    ++starter;
                }
            printf("\n\tYou've successfully input the student data...");
            }
    fclose(fp);
    }
        else if (strcmp(sems, "2ND SEMESTER") == 0 || strcmp(sems, "SUMMER") == 0) {
            fp = fopen(new_filename, "a");
            fprintf(fp, "===============================C O U R S E  D A T A===============================\n");
            if (strcmp(sems, "2ND SEMESTER") == 0){
                fprintf(fp, "==============================2 N D  S E M E S T E R==============================\n");
            }
                else if (strcmp(sems, "SUMMER") == 0){
                    fprintf(fp, "==============================S U M M E R==============================\n");
                }
            printf("\n\tNUMBER OF SUBJECTS : ");
            scanf("%d", &subject);
            printf("\n\tSCHOOL YEAR : ");
            fflush(stdin);
            fgets(sy, sizeof(sy), stdin);
            sy[strcspn(sy, "\n")] = 0;
            fprintf(fp, "SCHOOL YEAR : %s\n", sy);
            fprintf(fp, "SEMESTER : %s\n", sems);
                if (subject != 0){
                    while(starter <= subject){
                        printf("\n\tSUBJECT NAME : ");
                        fflush(stdin);
                        fgets(subjectname, sizeof(subjectname), stdin);
                        subjectname[strcspn(subjectname, "\n")] = 0;
                        fprintf(fp, "SUBJECT NAME : %s\n", subjectname);
                        printf("\n\tSUBJECT DESCRIPTION : ");
                        fflush(stdin);
                        fgets(subjdescr, sizeof(subjdescr), stdin);
                        subjdescr[strcspn(subjdescr, "\n")] = 0;
                        fprintf(fp, "SUBJECT DESCRIPTION : %s\n", subjdescr);
                        printf("\n\tGRADE : ");
                        fflush(stdin);
                        fgets(grade, sizeof(grade), stdin);
                        grade[strcspn(grade, "\n")] = 0;
                        fprintf(fp, "GRADE : %s\n", grade);
                        fflush(stdin);
                        ++starter;
                    }
                printf("\n\tYou've successfully input the student data...");
                }
                fclose(fp);
        }
            else{
                printf("\t\n\nYou've made a mistake....try again"), studata();
            }
    printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t: ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "MAIN MENU") == 0){
        main();
    }
        else if (strcmp(choice, "EXIT") == 0){
            printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
        }
            else {
                printf("\tYou've made a mistake , Try again..\n\n\n"), main();
            }
}
void gradesheet(){ // BY FLORES, JUSTINE FRITZ
    char cys[20], sy[20], ys[20], filename[] = "draft.txt", new_filename[40], subjectname[20], id[15], grade[10], choice[20], semester[20];
    int subject, result, starter = 1, starter1 = 1, students, studnum, from, to;
    FILE* fp;
    printf("\n\n===============================G R A D E  S H E E T===============================\n");
    printf("\n\tSEMESTER : ");
    fgets(semester, sizeof(semester), stdin);
    semester[strcspn(semester, "\n")] = 0;
    printf("\n\tCOURSE : ");
    scanf("%s", cys);
    printf("\n\tYEAR & SECTION : ");
    scanf("%s", ys);
    printf("\n\tSCHOOL YEAR");
    printf("\n\tFrom ");
    scanf("%d", &from);
    printf("\tTo ");
    scanf("%d", &to);
    fp = fopen(filename, "a");
    fclose(fp);
    sprintf(new_filename, "GRADE SHEET/%s%s%d-%d.txt", cys, ys, from, to);
    result = rename(filename, new_filename);

    fp = fopen(new_filename, "a");
    if (strcmp(semester, "1ST SEMESTER") == 0) {
        fprintf(fp, "COURSE, YEAR, & SECTION : %s %s", cys, ys);
        fprintf(fp, "\nSCHOOL YEAR : %d-%d", from, to);
        fprintf(fp, "\n=========1 S T  S E M E S T E R  G R A D E  S H E E T=========");
        printf("\n===============================1 S T  S E M E S T E R  G R A D E  S H E E T===============================\n");
        fprintf(fp, "\n\nSTUDENT ID   |SUBJECT NAME|");
        printf("\n\tNUMBER OF SUBJECTS : ");
        scanf("%d", &subject);
        printf("\n\tNUMBER OF STUDENTS : ");
        scanf("%d", &studnum);
        if (subject > 0) {
            for (int x = 1; x <= subject; x++) {
                fprintf(fp, "\n======================================");
                printf("\n\tSUBJECT NAME : ");
                fflush(stdin);
                fgets(subjectname, sizeof(subjectname), stdin);
                subjectname[strcspn(subjectname, "\n")] = 0;
                fprintf(fp, "\n\t     |  %s   |     ", subjectname);
                for (int y = 1; y <= studnum; y++) {
                    printf("\n\tSTUDENT ID : ");
                    fflush(stdin);
                    fgets(id, sizeof(id), stdin);
                    id[strcspn(id, "\n")] = 0;
                    printf("\n\tGRADE : ");
                    fflush(stdin);
                    fgets(grade, sizeof(grade), stdin);
                    grade[strcspn(grade, "\n")] = 0;
                    fprintf(fp, "\n%s  |     %s      |", id, grade);
                }
            }
            printf("\n\tYou've successfully input the subjects...\n");
            }
                else {
                printf("\t\n\nYou've made a mistake....try again\n"), main();
                }
        }
        else if (strcmp(semester, "2ND SEMESTER") == 0 || strcmp(semester, "SUMMER") == 0){
            if (strcmp(semester, "2ND SEMESTER") == 0 ){
                fprintf(fp, "\n\n=========2  N  D S E M E S T E R  G R A D E  S H E E T=========\n");
                printf("\n===============================2 N D  S E M E S T E R  G R A D E  S H E E T===============================\n");
            }
                else if (strcmp(semester, "SUMMER") == 0){
                    fprintf(fp, "\n\n========S U M M E R  G R A D E  S H E E T=========\n");
                    printf("\n===============================S U M M E R  G R A D E  S H E E T===============================\n");
                }
            fprintf(fp, "  \nSTUDENT ID   |SUBJECT NAME|");
            printf("\n\tNUMBER OF SUBJECTS : ");
            scanf("%d", &subject);
            printf("\n\tNUMBER OF STUDENTS : ");
            scanf("%d", &studnum);
            if (subject > 0) {
                for (int x = 1; x <= subject; x++){
                    fprintf(fp, "\n======================================");
                    printf("\n\tSUBJECT NAME : ");
                    fflush(stdin);
                    fgets(subjectname, sizeof(subjectname), stdin);
                    subjectname[strcspn(subjectname, "\n")] = 0;
                    fprintf(fp, "\n\t     |  %s   |     ", subjectname);
                        for (int y = 1; y <= studnum; y++) {
                            printf("\n\tSTUDENT ID : ");
                            fflush(stdin);
                            fgets(id, sizeof(id), stdin);
                            id[strcspn(id, "\n")] = 0;
                            printf("\n\tGRADE : ");
                            fflush(stdin);
                            fgets(grade, sizeof(grade), stdin);
                            grade[strcspn(grade, "\n")] = 0;
                            fprintf(fp, "\n%s  |     %s      |", id, grade);
                        }
                }
                printf("\n\tYou've successfully input the subjects...\n");
            } 
                else {
                    printf("\t\n\nYou've made a mistake....try again\n"), main();
                }
            } 
            else {
                printf("\t\n\nYou've made a mistake....try again\n"), main();
            }
            fclose(fp);
            printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t: ");
            fgets(choice, sizeof(choice), stdin);
            choice[strcspn(choice, "\n")] = 0;
            if (strcmp(choice, "MAIN MENU") == 0){
                main();
            } 
                else if (strcmp(choice, "EXIT") == 0){
                    printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
                }
                    else {
                        printf("\tYou've made a mistake , Try again..\n\n\n"), main();
                    }
}
void addrop(){ // BY LANDA, JUVENYL ANNE
    char choice[10],stuid[15], subname[10], subdes[25];
    int subj;
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tA D D  /  D R O P  O F  S U B J E C T\n");
    printf("\n\n\tADD\n\n\tDROP\n\n\t: ");
    scanf("%s", choice);
    printf("\n\tSTUDENT ID : ");
    fflush(stdin);
    fgets(stuid, sizeof(stuid), stdin);
    printf("\n\tNUMBER OF SUBJECT : ");
    scanf("%d", &subj);
        for(int x = 1; x <= subj; x++){
            fflush(stdin);
            printf("\n\tSUBJECT NAME : ");
            fgets(subname, sizeof(subname), stdin);
            fflush(stdin);
            printf("\n\tSUBJECT DESCRIPTION : ");
            fgets(subdes, sizeof(subdes), stdin);
            printf("\n\tSUCCESSFULLY %s THE SUBJECT", choice);
        }
    printf("\n\n=========================================================================================\n");
    printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t : ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "MAIN MENU") == 0){
        main();
    }
        else if (strcmp(choice, "EXIT") == 0){
            printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
        }
            else{
                printf("\tYou've made a mistake , Try again..\n\n\n"), addrop();
            }   
}
void admission(){ // BY COSIO, SHANNAH LIL
    FILE *fp;
    int result; 
    char file_name[] = "draft.txt", new_filename[40],lastn[20], firstn[20], middlen[20], sex[10], dob[40], pob[40], ha[40], sla[30], ea[20], time[20], room[20], sn[10], year[10],
    aar[40], disability[100], rfstu[100], numbroisatu[10], numbrosisgrad[10], numsisisat[10], scholar[100], fpre[40], choice[20], 
    spre[40], tpre[40], sem[40], yn[5];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tA P P L I C A T I O N  F O R  A D M I S S I O N\n");
    printf("\n\tSEAT NUMBER: ");
    scanf("%s", &sn);
    fp = fopen(file_name, "w");
    fclose(fp);
    sprintf(new_filename, "ADMISSION DATA/%s.txt", sn);
    result = rename(file_name, new_filename);

    fp = fopen(new_filename, "w");
    fprintf(fp, "SEAT NUMBER : %s", sn);
    printf("\n\tLAST NAME : ");
    fflush(stdin);
    fgets(lastn, sizeof(lastn), stdin);
    fprintf(fp, "\n\nLAST NAME : %s", lastn);
    lastn[strcspn(lastn, "\n")] = '\0';
    printf("\n\tFIRST NAME : ");
    fgets(firstn, sizeof(firstn), stdin);
    fprintf(fp, "\nFIRST NAME : %s", firstn);
    firstn[strcspn(firstn, "\n")] = 0;
    printf("\n\tMIDDLE NAME : ");
    fgets(middlen, sizeof(middlen), stdin);
    fprintf(fp, "\nMIDDLE NAME : %s", middlen);
    middlen[strcspn(middlen, "\n")] = 0;
    printf("\n\tENTER SEX : ");
    fgets(sex, sizeof(sex), stdin);
    fprintf(fp, "\nSEX : %s", sex);
    sex[strcspn(sex, "\n")] = 0;
    printf("\n\tDATE OF BIRTH : ");
    fgets(dob, sizeof(dob), stdin);
    fprintf(fp, "\nDATE OF BIRTH : %s", dob);
    dob[strcspn(dob, "\n")] = 0;
    printf("\n\tPLACE OF BIRTH : ");
    fgets(pob, sizeof(pob), stdin);
    fprintf(fp, "\nPLACE OF BIRTH : %s", pob);
    pob[strcspn(pob, "\n")] = 0;
	printf("\n\tHOME ADDRESS : ");
    fgets(ha, sizeof(ha), stdin);
    fprintf(fp, "\nHOME ADDRESS : %s", ha);
    ha[strcspn(ha, "\n")] = 0;
    printf("\n\tSCHOOL LAST ATTENDED : ");
    fgets(sla, sizeof(sla), stdin);
    fprintf(fp, "\nSCHOOL LAST ATTENDED : %s", sla); 
    sla[strcspn(sla, "\n")] = 0;
	printf("\n\tEXAMINATION DATE : ");
    fgets(ea, sizeof(ea), stdin);
    fprintf(fp, "\nEXAMINATION DATE : %s", ea);
    ea[strcspn(ea, "\n")] = 0;
    printf("\n\tTIME : ");
    fgets(time, sizeof(time), stdin);
    fprintf(fp, "\nTIME : %s", time);
    time[strcspn(time, "\n")] = 0;
    printf("\n\tROOM : ");
    fgets(room, sizeof(room), stdin);
    fprintf(fp, "\nPLACE : %s", room);
    room[strcspn(room, "\n")] = 0;
    printf("\n\tACADEMIC AWARD RECIEVED : ");
    fgets(aar, sizeof(aar), stdin);
    fprintf(fp, "\nACADEMIC AWARD RECIEVED : %s", aar);
    aar[strcspn(aar, "\n")] = 0;
    printf("\n\tDISABILITY (if any) : ");
    fgets(disability, sizeof(disability), stdin);
    fprintf(fp, "\nDISABILITY (if any) : %s", disability);
    disability[strcspn(disability, "\n")] = 0;
    printf("\n\tREASON FOR STUDYING IN THIS UNIVERSITY? : ");
    fgets(rfstu, sizeof(rfstu), stdin);
    fprintf(fp, "\nREASON FOR STUDYING IN THIS UNIVERSITY? : \n %s", rfstu);
    rfstu[strcspn(rfstu, "\n")] = 0;
    printf("\n\tNO. OF BROTHERS STUDYING AT ISAT U : ");
    fgets(numbroisatu, sizeof(numbroisatu), stdin);
    fprintf(fp, "\nNO. OF BROTHERS STUDYING AT ISAT U : %s", numbroisatu);
    numbroisatu[strcspn(numbroisatu, "\n")] = 0;
    printf("\n\tNO. OF SISTERS STUDYING AT ISAT U : ");
    fgets(numsisisat, sizeof(numsisisat), stdin);
    fprintf(fp, "\nNO. OF SISTERS STUDYING AT ISAT U : %s", numsisisat);
    numsisisat[strcspn(numsisisat, "\n")] = 0;
    printf("\n\tNO. OF BROTHERS/SISTERS GRADUATED FROM ISAT U : ");
    fgets(numbrosisgrad, sizeof(numbrosisgrad), stdin);
    fprintf(fp, "\nNO. OF BROTHERS/SISTERS GRADUATED FROM ISAT U : %s", numbrosisgrad);
    numbrosisgrad[strcspn(numbrosisgrad, "\n")] = 0;
    printf("\n\tSCHOOLARSHIP/GRANT? IF YES STATE THE PROGRAM (y/n) : ");
    fgets(scholar, sizeof(scholar), stdin);
    fprintf(fp, "\nSCHOOLARSHIP/GRANT? IF ANY : %s", scholar);
    scholar[strcspn(scholar, "\n")] = 0;
    printf("\n\tHAVE YOU ENROLLED IN ANY COLLEGE/UNIVERSITY?(y/n) : ");
    fgets(yn, sizeof(yn), stdin);
    yn[strcspn(yn, "\n")] = 0;
    fprintf(fp, "\nHAVE YOU ENROLLED IN ANY COLLEGE/UNIVERSITY? (y/n) : %s\n", yn);
    if (strcmp(yn, "Y") == 0 || strcmp(yn, "y") == 0){
    printf("\n\tYEAR : ");
    fgets(year, sizeof(year), stdin);
    fprintf(fp, "\nYEAR : %s", year);
    year[strcspn(year, "\n")] = 0;
    printf("\n\tSEM : ");
    fgets(sem, sizeof(sem), stdin);
    fprintf(fp, "\nSEM : %s", sem);
    sem[strcspn(sem, "\n")] = 0;
	printf("\n\tC O U R S E  P R E F E R E N C E S\n");
    fprintf(fp, "\nC O U R S E  P R E F E R E N C E S\n");
    printf("\n\tFirst Preference : ");
    fgets(fpre, sizeof(fpre), stdin);
    fprintf(fp, "\nFirst Preference : %s", fpre);
    fpre[strcspn(fpre, "\n")] = 0;
    printf("\n\tSecond Preference : ");
    fgets(spre, sizeof(spre), stdin);
    fprintf(fp, "\nSecond Preference : %s", spre);
    spre[strcspn(spre, "\n")] = 0;
    printf("\n\tThird Preference : ");
    fgets(tpre, sizeof(tpre), stdin);
    fprintf(fp, "\nThird Preference : %s", tpre);
    tpre[strcspn(tpre, "\n")] = 0;
    printf("\n\tYou've successfully encode the data....");
    }
        else{
	    printf("\n\tC O U R S E  P R E F E R E N C E S\n");
        fprintf(fp, "\nC O U R S E  P R E F E R E N C E S\n");
        printf("\n\tFirst Preference : ");
        fgets(fpre, sizeof(fpre), stdin);
        fprintf(fp, "\nFirst Preference : %s", fpre);
        fpre[strcspn(fpre, "\n")] = 0;
        printf("\n\tSecond Preference : ");
        fgets(spre, sizeof(spre), stdin);
        fprintf(fp, "\nSecond Preference : %s", spre);
        spre[strcspn(spre, "\n")] = 0;
        printf("\ntThird Preference : ");
        fgets(tpre, sizeof(tpre), stdin);
        fprintf(fp, "\nThird Preference : %s", tpre);
        tpre[strcspn(tpre, "\n")] = 0;
        printf("You've successfully encode the data....");
        }
        fclose(fp);
        printf("\n\n\tMAIN MENU\n\n\tEXIT\n\n\t: ");
        fgets(choice, sizeof(choice), stdin);
        choice[strcspn(choice, "\n")] = 0;
        if (strcmp(choice, "MAIN MENU") == 0){
            main();
        }
            else if (strcmp(choice, "EXIT") == 0){
                printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
            }
                else {
                    printf("\tYou've made a mistake , Try again..\n\n\n"), main();
                }
}
void request(){ // BY ALMINAZA, MARIA GIEZZA
    char choice[20];
    printf("\n\n=========================================================================================\n\n");
    printf("\n\t\t\tR E Q U E S T  R A T E  O F  F E E\n");
    printf("\n\tOfficial Transcript of Record (OTR) : Php. 30.00 per page\n");
    printf("\n\tSecondary Permanent Records (F137-A) : Php. 30.00\n");
    printf("\n\tCertification : Php. 30.00\n");
    printf("\n\tCertification of Transfer Credentials : Php. 25.00 + OTR Fee\n");
    printf("\n\tCertification Auth. & Verification (CAV) : Php. 30.00\n");
    printf("\n\tAuthentication of Academic Records : Php. 30.00\n");
    printf("\n\tReport Card : Php. 10.00 per sem\n");
    printf("\n\tReport of Grades : Php. 30.00\n");
    printf("\n\tCertificate of Registration : Php. 30.00\n");
    printf("\n\tReissuance of Diploma/Proficiency Certificate : Php. 100.00\n");
    printf("\n\tAppraisal Fee : Php. 50.00\n");
    printf("\n\tMAIN MENU\n\n\tEXIT\n\n\t: ");
    fgets(choice, sizeof(choice), stdin);
    choice[strcspn(choice, "\n")] = 0;
    if (strcmp(choice, "MAIN MENU") == 0){
        main();
    }
        else if (strcmp(choice, "EXIT") == 0){
            printf("\tThanks for using this program. Group of ALMINAZA, COSIO, FLORES, LANDA, PANIZA\n\n");
        }
            else {
                printf("\tYou've made a mistake , Try again..\n\n\n"), request();
            }
}